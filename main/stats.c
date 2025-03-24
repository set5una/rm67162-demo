#include <stdio.h>
#include <assert.h>
#include "esp_heap_caps.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void stats(void *pvParameter)
{
    while (1)
    {
        TickType_t cnt_tick = xTaskGetTickCount();
        char *buffer = heap_caps_malloc(512 * sizeof(char), MALLOC_CAP_SPIRAM);
        assert(buffer);
        printf("Current Tick Count: %lu\n", (unsigned long)cnt_tick);
        printf("Free Heap in SPIRAM: %d B\n", heap_caps_get_free_size(MALLOC_CAP_SPIRAM));
        printf("Free DMA enabled memory: %d B \n", heap_caps_get_free_size(MALLOC_CAP_DMA));
        printf("Name / STATUS / PRIO / FREE / ID\n");
        vTaskList(buffer);
        printf("%s\n", buffer);
        free(buffer);
        vTaskDelay(pdMS_TO_TICKS(2000));
    }
}
