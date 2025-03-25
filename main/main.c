#include <stdio.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_err.h"
#include "esp_log.h"

#include "driver/gpio.h"
#include "driver/spi_master.h"
#include "esp_timer.h"
#include "esp_cache.h"
#include "esp_lcd_panel_io.h"
#include "esp_lcd_panel_vendor.h"
#include "esp_lcd_panel_ops.h"
#include "esp_lcd_sh8601.h"

#include "lvgl.h"

// Fonts
#include "fonts.h"

static const char *TAG = "main"; // Tag for ESP Logging API

// Pin Definitions
#define DISP_HOST SPI2_HOST
#define DISP_BKLT_LVL_ON 1
#define DISP_BKLT_LVL_OFF !DISP_BKLT_LVL_ON
#define DISP_PIN_BKLT (-1) // Not needed
#define DISP_PIN_CS (GPIO_NUM_6)
#define DISP_PIN_CLK (GPIO_NUM_47)
#define DISP_PIN_RST (GPIO_NUM_17)
#define DISP_PIN_DATA_0 (GPIO_NUM_18)
#define DISP_PIN_DATA_1 (GPIO_NUM_7)
#define DISP_PIN_DATA_2 (GPIO_NUM_48)
#define DISP_PIN_DATA_3 (GPIO_NUM_5)

// Display Configuration
#define DISP_RES_H 536
#define DISP_RES_V 240
#define DISP_BIT_PER_PX 24 // RGB888
#define FRAMEBUFFER_H 20

// RM67162/SH8601 Init Sequence
static const sh8601_lcd_init_cmd_t disp_init_cmd[] = {
    {0x11, (uint8_t[]){0x00}, 0, 120},
    {0x36, (uint8_t[]){0xF8}, 1, 0}, // Set channel order to BGR
    {0x3A, (uint8_t[]){0x77}, 1, 0}, // Set color mode to RGB888
    {0x2A, (uint8_t[]){0x00, 0x00, 0x02, 0x17}, 4, 0},
    {0x2B, (uint8_t[]){0x00, 0x00, 0x00, 0xEF}, 4, 0},
    {0x51, (uint8_t[]){0x00}, 1, 10},
    {0x29, (uint8_t[]){0x00}, 0, 10},
    {0x51, (uint8_t[]){0xA0}, 1, 0}, // Brightness
};

// Flush bitmap data in framebuffer to display
static void lvgl_flush(lv_display_t *disp, const lv_area_t *area, uint8_t *px_map)
{
    esp_lcd_panel_handle_t panel = (esp_lcd_panel_handle_t)lv_display_get_user_data(disp);
    esp_lcd_panel_draw_bitmap(panel, area->x1, area->y1, area->x2 + 1, area->y2 + 1, (lv_color_t *)px_map);
    return;
}

// Async callback on flush completion, placed in D/IRAM
static bool IRAM_ATTR lvgl_flush_ready_cb(esp_lcd_panel_io_handle_t panel_io, esp_lcd_panel_io_event_data_t *edata, void *user_ctx)
{
    lv_display_t *disp = (lv_display_t *)user_ctx;
    lv_display_flush_ready(disp);
    return false;
}

static void IRAM_ATTR lvgl_timer_handler(void *args)
{
    lv_tick_inc(1);
}

// Task to call LVGL timer handler regularly
static void lvgl_task(void *arg)
{
    while (1)
    {
        lv_timer_handler();
        vTaskDelay(pdMS_TO_TICKS(5)); // Yield to idle task
    }
}

// Horizontal scanlines
void create_scanline(int offset)
{
    lv_obj_t *scanline = lv_obj_create(lv_scr_act());
    lv_obj_remove_style_all(scanline);
    lv_obj_set_size(scanline, DISP_RES_H, 10);
    lv_obj_set_style_bg_color(scanline, lv_color_hex(0x000000), 0);
    lv_obj_set_style_bg_opa(scanline, LV_OPA_70, 0);
    lv_obj_set_y(scanline, -10);
    lv_obj_move_foreground(scanline);

    lv_anim_t a_scanline;
    lv_anim_init(&a_scanline);
    lv_anim_set_var(&a_scanline, scanline);
    lv_anim_set_exec_cb(&a_scanline, (lv_anim_exec_xcb_t)lv_obj_set_y);
    lv_anim_set_values(&a_scanline, -10, DISP_RES_V);
    lv_anim_set_duration(&a_scanline, 6000);
    lv_anim_set_delay(&a_scanline, offset);
    lv_anim_set_repeat_count(&a_scanline, LV_ANIM_REPEAT_INFINITE);
    lv_anim_start(&a_scanline);
}

// Texts
void draw_text(void)
{
    lv_obj_set_style_bg_color(lv_screen_active(), lv_color_hex(0x000000), LV_PART_MAIN);
    lv_obj_set_style_bg_opa(lv_screen_active(), LV_OPA_COVER, LV_PART_MAIN);

    lv_obj_t *row = lv_obj_create(lv_screen_active());
    lv_obj_remove_style_all(row);
    lv_obj_set_size(row, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
    lv_obj_set_flex_flow(row, LV_FLEX_FLOW_ROW);
    lv_obj_set_style_pad_column(row, 4, 0);
    lv_obj_align(row, LV_ALIGN_TOP_MID, 0, 40);

    lv_obj_t *brace_left = lv_label_create(row);
    lv_label_set_text(brace_left, "{ ");
    lv_obj_set_style_text_font(brace_left, &signalis_std, LV_PART_MAIN);
    lv_obj_set_style_text_color(brace_left, lv_color_hex(0xEF0000), LV_PART_MAIN);

    lv_obj_t *cjk = lv_label_create(row);
    lv_label_set_text(cjk, "零");
    lv_obj_set_style_text_font(cjk, &source_serif_cjk, LV_PART_MAIN);
    lv_obj_set_style_text_color(cjk, lv_color_hex(0xEF0000), LV_PART_MAIN);

    lv_obj_t *brace_right = lv_label_create(row);
    lv_label_set_text(brace_right, " }");
    lv_obj_set_style_text_font(brace_right, &signalis_std, LV_PART_MAIN);
    lv_obj_set_style_text_color(brace_right, lv_color_hex(0xEF0000), LV_PART_MAIN);

    lv_obj_t *text = lv_label_create(lv_screen_active());
    lv_label_set_text(text, "THIS SPACE\n"
                            "INTENTIONALLY\n"
                            "LEFT BLANK.");
    lv_obj_set_style_text_font(text, &signalis_32px, LV_PART_MAIN);
    lv_obj_set_style_text_color(text, lv_color_hex(0xEF0000), LV_PART_MAIN);
    lv_obj_set_style_text_align(text, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);
    lv_obj_set_style_text_line_space(text, 5, LV_PART_MAIN);
    lv_obj_align_to(text, row, LV_ALIGN_OUT_BOTTOM_MID, 0, 20);
}

void app_main(void)
{
    ESP_LOGI(TAG, "LVGL Init");
    lv_init();

    ESP_LOGI(TAG, "LVGL Timer Init");
    const esp_timer_create_args_t lvgl_timer_args = {
        .callback = &lvgl_timer_handler,
        .name = "lvgl_timer"};
    esp_timer_handle_t lvgl_timer = NULL;
    ESP_ERROR_CHECK(esp_timer_create(&lvgl_timer_args, &lvgl_timer));
    ESP_ERROR_CHECK(esp_timer_start_periodic(lvgl_timer, 1000));

    ESP_LOGI(TAG, "SPI Bus Init");
    const spi_bus_config_t disp_spi_cfg = SH8601_PANEL_BUS_QSPI_CONFIG(DISP_PIN_CLK,
                                                                       DISP_PIN_DATA_0,
                                                                       DISP_PIN_DATA_1,
                                                                       DISP_PIN_DATA_2,
                                                                       DISP_PIN_DATA_3,
                                                                       DISP_RES_H * DISP_RES_V * DISP_BIT_PER_PX / 8);
    ESP_ERROR_CHECK(spi_bus_initialize(DISP_HOST, &disp_spi_cfg, SPI_DMA_CH_AUTO));

    ESP_LOGI(TAG, "DISP Panel Init");
    esp_lcd_panel_io_handle_t io_handle = NULL;
    static lv_display_t *disp = NULL;
    disp = lv_display_create(DISP_RES_H, DISP_RES_V);
    const esp_lcd_panel_io_spi_config_t io_config = SH8601_PANEL_IO_QSPI_CONFIG(DISP_PIN_CS,
                                                                                lvgl_flush_ready_cb,
                                                                                disp); // Register async flush callback
    ESP_ERROR_CHECK(esp_lcd_new_panel_io_spi((esp_lcd_spi_bus_handle_t)DISP_HOST, &io_config, &io_handle));

    sh8601_vendor_config_t vendor_config = {
        .init_cmds = disp_init_cmd,
        .init_cmds_size = sizeof(disp_init_cmd) / sizeof(disp_init_cmd[0]),
        .flags = {
            .use_qspi_interface = 1,
        },
    };

    esp_lcd_panel_handle_t panel_handle = NULL;
    const esp_lcd_panel_dev_config_t panel_config = {
        .reset_gpio_num = DISP_PIN_RST,
        .rgb_ele_order = LCD_RGB_ELEMENT_ORDER_RGB,
        .bits_per_pixel = DISP_BIT_PER_PX,
        .vendor_config = &vendor_config,
    };

    ESP_LOGI(TAG, "Installing Panel Driver");
    ESP_ERROR_CHECK(esp_lcd_new_panel_sh8601(io_handle, &panel_config, &panel_handle));

    // Display panel init
    ESP_ERROR_CHECK(esp_lcd_panel_reset(panel_handle));
    ESP_ERROR_CHECK(esp_lcd_panel_init(panel_handle));
    ESP_ERROR_CHECK(esp_lcd_panel_disp_on_off(panel_handle, true));

    // Framebuffer allocation, dual buffer mode
    size_t fb_size = DISP_RES_H * FRAMEBUFFER_H * sizeof(lv_color_t);
    DMA_ATTR static lv_color_t fb0[DISP_RES_H * FRAMEBUFFER_H];
    DMA_ATTR static lv_color_t fb1[DISP_RES_H * FRAMEBUFFER_H];

    // Setup LVGL display
    lv_display_set_user_data(disp, panel_handle);
    lv_display_set_flush_cb(disp, lvgl_flush);
    lv_display_set_buffers(disp, &fb0, &fb1, fb_size, LV_DISPLAY_RENDER_MODE_PARTIAL);

    // Draw the text and scanlines
    draw_text();
    create_scanline(0);
    create_scanline(3000);                                          // Create 2 scan lines 120px (1/2 screen) apart
    lv_obj_set_scrollbar_mode(lv_scr_act(), LV_SCROLLBAR_MODE_OFF); // Disable automatic scrollbar

    ESP_LOGI(TAG, "Booting LVGL Task");
    xTaskCreatePinnedToCore(lvgl_task, "LVGL Task", 6144, NULL, 2, NULL, 0);
}
