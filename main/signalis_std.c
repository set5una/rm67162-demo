/*******************************************************************************
 * Size: 44 px
 * Bpp: 1
 * Opts: --bpp 1 --size 44 --font DINMittelschriftStd.ttf --symbols ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890<>(){}[]:;,.'"!@#$%^&*  --format lvgl -o signalis_std.c
 ******************************************************************************/

#include "signalis_std.h"
#include "lvgl.h"

#ifndef SIGNALIS_STD
#define SIGNALIS_STD 1
#endif

#if SIGNALIS_STD

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xfd, 0xe7, 0x9e, 0x79, 0xe7, 0x9e, 0x79, 0xe7,
    0x9e, 0x79, 0xe7, 0x9e, 0x70, 0xc3, 0xc, 0x30,
    0xc3, 0xc, 0x0, 0x0, 0x0, 0x79, 0xe7, 0x9e,

    /* U+0022 "\"" */
    0xf7, 0xfb, 0xfd, 0xfe, 0xff, 0x7f, 0xbf, 0xdf,
    0xef,

    /* U+0023 "#" */
    0x1, 0xc1, 0xc0, 0xe, 0xe, 0x0, 0x70, 0x70,
    0x7, 0x87, 0x80, 0x3c, 0x3c, 0x1, 0xe1, 0xe0,
    0xf, 0xf, 0x0, 0x70, 0x70, 0x3, 0x83, 0x80,
    0x1c, 0x1c, 0x1f, 0xff, 0xfe, 0xff, 0xff, 0xf7,
    0xff, 0xff, 0x83, 0xc3, 0xc0, 0x1e, 0x1e, 0x0,
    0xe0, 0xe0, 0x7, 0x7, 0x0, 0x78, 0x78, 0x3,
    0xc3, 0xc1, 0xff, 0xff, 0xef, 0xff, 0xff, 0x7f,
    0xff, 0xf8, 0x38, 0x38, 0x1, 0xc1, 0xc0, 0xe,
    0xe, 0x0, 0xf0, 0xf0, 0x7, 0x87, 0x80, 0x3c,
    0x3c, 0x1, 0xe1, 0xe0, 0xe, 0xe, 0x0, 0x70,
    0x70, 0x3, 0x83, 0x80,

    /* U+0024 "$" */
    0x0, 0x30, 0x0, 0x3, 0x0, 0x0, 0x30, 0x0,
    0xf, 0xe0, 0x3, 0xff, 0x80, 0xff, 0xfe, 0xf,
    0xff, 0xe1, 0xfb, 0x3c, 0x1e, 0x30, 0xc3, 0xc3,
    0x0, 0x3c, 0x30, 0x3, 0xc3, 0x0, 0x3c, 0x30,
    0x3, 0xc3, 0x0, 0x3e, 0x30, 0x1, 0xf3, 0x0,
    0x1f, 0xf0, 0x0, 0xff, 0xe0, 0x7, 0xff, 0x80,
    0x3f, 0xfc, 0x0, 0x7f, 0xe0, 0x3, 0xfe, 0x0,
    0x31, 0xf0, 0x3, 0xf, 0x0, 0x30, 0xf0, 0x3,
    0xf, 0x0, 0x30, 0xf1, 0x3, 0xf, 0x18, 0x31,
    0xf3, 0xc3, 0x1e, 0x7f, 0xb7, 0xe7, 0xff, 0xfc,
    0x3f, 0xff, 0x80, 0xff, 0xf0, 0x3, 0xfc, 0x0,
    0x3, 0x0, 0x0, 0x30, 0x0, 0x3, 0x0, 0x0,
    0x30, 0x0, 0x3, 0x0,

    /* U+0025 "%" */
    0x3e, 0x1, 0xcf, 0xe0, 0x3b, 0x8e, 0xe, 0x71,
    0xc1, 0xce, 0x38, 0x79, 0xc7, 0xe, 0x38, 0xe3,
    0xc7, 0x1c, 0x70, 0xe3, 0x9e, 0xf, 0xe3, 0x80,
    0xf8, 0xf0, 0x0, 0x1c, 0x0, 0x7, 0x80, 0x0,
    0xe0, 0x0, 0x1c, 0x0, 0x7, 0x0, 0x0, 0xe0,
    0x0, 0x38, 0x0, 0x7, 0x0, 0x1, 0xe0, 0x0,
    0x38, 0xf8, 0xf, 0x3f, 0x81, 0xcf, 0x78, 0x79,
    0xc7, 0xe, 0x38, 0xe3, 0xc7, 0x1c, 0x70, 0xe3,
    0x9e, 0x1c, 0x73, 0x83, 0x8e, 0x70, 0x7b, 0xdc,
    0x7, 0xf3, 0x80, 0x7c,

    /* U+0026 "&" */
    0x1, 0xf8, 0x0, 0x0, 0xff, 0x0, 0x0, 0x7f,
    0xe0, 0x0, 0x3f, 0xfc, 0x0, 0x1f, 0xf, 0x80,
    0x7, 0x81, 0xe0, 0x1, 0xe0, 0x78, 0x0, 0x78,
    0x1e, 0x0, 0x1e, 0x7, 0x80, 0x7, 0xc3, 0xe0,
    0x0, 0xfb, 0xf0, 0x0, 0x3f, 0xf8, 0x0, 0x7,
    0xfc, 0x0, 0x1, 0xfe, 0x0, 0x0, 0xff, 0x0,
    0x0, 0x7f, 0xe0, 0x0, 0x3f, 0xfc, 0x0, 0x1f,
    0x1f, 0x81, 0x7, 0x83, 0xe0, 0x7b, 0xe0, 0x7c,
    0x3e, 0xf0, 0xf, 0x8f, 0x3c, 0x1, 0xf7, 0xcf,
    0x0, 0x7f, 0xe3, 0xc0, 0xf, 0xf8, 0xf0, 0x1,
    0xfc, 0x3e, 0x0, 0x7e, 0x7, 0xc0, 0x3f, 0xc1,
    0xf8, 0x3f, 0xf8, 0x3f, 0xff, 0xff, 0x7, 0xff,
    0xe7, 0xc0, 0xff, 0xe0, 0xf8, 0xf, 0xe0, 0x1f,

    /* U+0027 "'" */
    0xff, 0xff, 0xff, 0xff,

    /* U+0028 "(" */
    0x3, 0x7, 0x6, 0xe, 0x1c, 0x1c, 0x3c, 0x38,
    0x38, 0x78, 0x78, 0x78, 0x70, 0xf0, 0xf0, 0xf0,
    0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0x70,
    0x78, 0x78, 0x78, 0x38, 0x38, 0x3c, 0x1c, 0x1c,
    0xe, 0x6, 0x7, 0x3,

    /* U+0029 ")" */
    0xc0, 0xe0, 0x60, 0x70, 0x38, 0x38, 0x3c, 0x1c,
    0x1c, 0x1e, 0x1e, 0x1e, 0xe, 0xf, 0xf, 0xf,
    0xf, 0xf, 0xf, 0xf, 0xf, 0xf, 0xf, 0xe,
    0x1e, 0x1e, 0x1e, 0x1c, 0x1c, 0x3c, 0x38, 0x38,
    0x70, 0x60, 0xe0, 0xc0,

    /* U+002A "*" */
    0x7, 0x0, 0x38, 0x11, 0xc4, 0xee, 0xe7, 0xff,
    0x1f, 0xf0, 0x3e, 0x7, 0xfc, 0x7f, 0xf3, 0xbb,
    0x91, 0xc4, 0xe, 0x0, 0x70, 0x0,

    /* U+002C "," */
    0xff, 0xff, 0xfe, 0xc0,

    /* U+002E "." */
    0xff, 0xff,

    /* U+0030 "0" */
    0x3, 0xf0, 0x3, 0xff, 0x1, 0xff, 0xe0, 0xff,
    0xfc, 0x7e, 0x1f, 0x9e, 0x1, 0xef, 0x80, 0x7f,
    0xc0, 0xf, 0xf0, 0x3, 0xfc, 0x0, 0xff, 0x0,
    0x3f, 0xc0, 0xf, 0xf0, 0x3, 0xfc, 0x0, 0xff,
    0x0, 0x3f, 0xc0, 0xf, 0xf0, 0x3, 0xfc, 0x0,
    0xff, 0x0, 0x3f, 0xc0, 0xf, 0xf0, 0x3, 0xfc,
    0x0, 0xff, 0x0, 0x3f, 0xc0, 0xf, 0xf0, 0x3,
    0xfe, 0x1, 0xf7, 0x80, 0x79, 0xf8, 0x7e, 0x3f,
    0xff, 0x7, 0xff, 0x80, 0xff, 0xc0, 0xf, 0xc0,

    /* U+0031 "1" */
    0xf, 0x8f, 0xcf, 0xff, 0xff, 0xff, 0xbf, 0x9f,
    0xf, 0x7, 0x83, 0xc1, 0xe0, 0xf0, 0x78, 0x3c,
    0x1e, 0xf, 0x7, 0x83, 0xc1, 0xe0, 0xf0, 0x78,
    0x3c, 0x1e, 0xf, 0x7, 0x83, 0xc1, 0xe0, 0xf0,
    0x78, 0x3c, 0x1e, 0xf,

    /* U+0032 "2" */
    0x3, 0xf0, 0x3, 0xff, 0x1, 0xff, 0xe0, 0xff,
    0xfc, 0x7e, 0xf, 0x9f, 0x1, 0xef, 0x80, 0x7f,
    0xe0, 0xf, 0xf8, 0x3, 0xc0, 0x0, 0xf0, 0x0,
    0x3c, 0x0, 0x1f, 0x0, 0xf, 0x80, 0x3, 0xe0,
    0x1, 0xf0, 0x0, 0xfc, 0x0, 0x7e, 0x0, 0x3f,
    0x0, 0xf, 0x80, 0x7, 0xe0, 0x3, 0xf0, 0x1,
    0xf8, 0x0, 0x7c, 0x0, 0x3f, 0x0, 0x1f, 0x80,
    0xf, 0xc0, 0x7, 0xe0, 0x1, 0xf8, 0x0, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+0033 "3" */
    0x3, 0xf0, 0x1, 0xff, 0x80, 0x7f, 0xf8, 0x1f,
    0xff, 0x87, 0xe1, 0xf8, 0xf8, 0xf, 0x1e, 0x1,
    0xf3, 0xc0, 0x1e, 0x0, 0x3, 0xc0, 0x0, 0x78,
    0x0, 0xf, 0x0, 0x3, 0xe0, 0x1, 0xf8, 0x3,
    0xff, 0x0, 0x7f, 0xc0, 0xf, 0xf8, 0x1, 0xff,
    0x80, 0x1, 0xf8, 0x0, 0x1f, 0x0, 0x1, 0xf0,
    0x0, 0x1e, 0x0, 0x3, 0xc0, 0x0, 0x78, 0x0,
    0xf, 0xf8, 0x1, 0xef, 0x80, 0x7d, 0xf0, 0x1f,
    0x3f, 0x87, 0xe3, 0xff, 0xf8, 0x3f, 0xfe, 0x3,
    0xff, 0x80, 0x1f, 0xc0,

    /* U+0034 "4" */
    0x0, 0x3e, 0x0, 0x3, 0xe0, 0x0, 0x7c, 0x0,
    0x7, 0xc0, 0x0, 0xf8, 0x0, 0xf, 0x80, 0x1,
    0xf0, 0x0, 0x1f, 0x0, 0x1, 0xe0, 0x0, 0x3e,
    0x0, 0x3, 0xc0, 0x0, 0x7c, 0x0, 0x7, 0xc0,
    0x0, 0xf8, 0x0, 0xf, 0x87, 0x81, 0xf0, 0x78,
    0x1f, 0x7, 0x83, 0xe0, 0x78, 0x3e, 0x7, 0x83,
    0xc0, 0x78, 0x7c, 0x7, 0x87, 0xc0, 0x78, 0xf8,
    0x7, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf0, 0x0, 0x78, 0x0, 0x7,
    0x80, 0x0, 0x78, 0x0, 0x7, 0x80, 0x0, 0x78,

    /* U+0035 "5" */
    0x7f, 0xff, 0x9f, 0xff, 0xe7, 0xff, 0xf9, 0xff,
    0xfe, 0x78, 0x0, 0x1e, 0x0, 0x7, 0x80, 0x1,
    0xe0, 0x0, 0x78, 0x0, 0x1e, 0x0, 0x7, 0x9f,
    0x81, 0xff, 0xf8, 0x7f, 0xff, 0x1f, 0xff, 0xc7,
    0xe0, 0xf9, 0xf0, 0x1e, 0x78, 0x7, 0xc0, 0x0,
    0xf0, 0x0, 0x3c, 0x0, 0xf, 0x0, 0x3, 0xc0,
    0x0, 0xf0, 0x0, 0x3c, 0x0, 0xf, 0xf8, 0x3,
    0xde, 0x1, 0xf7, 0xc0, 0x79, 0xf8, 0x3e, 0x3f,
    0xff, 0x7, 0xff, 0x80, 0xff, 0xc0, 0xf, 0xc0,

    /* U+0036 "6" */
    0x0, 0x7e, 0x0, 0x1f, 0x0, 0xf, 0xc0, 0x3,
    0xe0, 0x1, 0xf8, 0x0, 0x7c, 0x0, 0x3f, 0x0,
    0xf, 0x80, 0x7, 0xe0, 0x1, 0xf0, 0x0, 0xf8,
    0x0, 0x3e, 0x0, 0x1f, 0x0, 0x7, 0xfe, 0x3,
    0xff, 0xe0, 0xff, 0xfc, 0x7f, 0xff, 0x9f, 0x87,
    0xe7, 0x80, 0x7f, 0xe0, 0x1f, 0xf0, 0x3, 0xfc,
    0x0, 0xff, 0x0, 0x3f, 0xc0, 0xf, 0xf0, 0x3,
    0xfe, 0x1, 0xf7, 0x80, 0x79, 0xf8, 0x7e, 0x3f,
    0xff, 0x7, 0xff, 0x80, 0xff, 0xc0, 0xf, 0xc0,

    /* U+0037 "7" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xf0, 0x7, 0xfc, 0x3, 0xef, 0x0, 0xfb,
    0xc0, 0x7e, 0xf0, 0x1f, 0x0, 0x7, 0xc0, 0x3,
    0xe0, 0x0, 0xf8, 0x0, 0x7e, 0x0, 0x1f, 0x0,
    0x7, 0xc0, 0x3, 0xe0, 0x0, 0xf8, 0x0, 0x3e,
    0x0, 0x1f, 0x0, 0x7, 0xc0, 0x3, 0xe0, 0x0,
    0xf8, 0x0, 0x3e, 0x0, 0x1f, 0x0, 0x7, 0xc0,
    0x3, 0xe0, 0x0, 0xf8, 0x0, 0x3e, 0x0, 0x1f,
    0x0, 0x7, 0xc0, 0x1, 0xe0, 0x0, 0xf8, 0x0,

    /* U+0038 "8" */
    0x1, 0xf0, 0x0, 0xff, 0x80, 0x3f, 0xf8, 0xf,
    0xff, 0x83, 0xe0, 0xf8, 0x78, 0xf, 0x1e, 0x0,
    0xf3, 0xc0, 0x1e, 0x78, 0x3, 0xcf, 0x0, 0x79,
    0xe0, 0xf, 0x3e, 0x3, 0xe3, 0xe0, 0xf8, 0x7f,
    0xff, 0x7, 0xff, 0xc0, 0xff, 0xf8, 0x3f, 0xff,
    0x8f, 0xc1, 0xf9, 0xf0, 0x1f, 0x7c, 0x1, 0xff,
    0x0, 0x1f, 0xe0, 0x3, 0xfc, 0x0, 0x7f, 0x80,
    0xf, 0xf0, 0x1, 0xff, 0x0, 0x7d, 0xf0, 0x1f,
    0x3f, 0x7, 0xe3, 0xff, 0xf8, 0x3f, 0xfe, 0x3,
    0xff, 0x80, 0x1f, 0xc0,

    /* U+0039 "9" */
    0x3, 0xf0, 0x3, 0xff, 0x1, 0xff, 0xe0, 0xff,
    0xfc, 0x7e, 0x1f, 0x9e, 0x1, 0xef, 0x80, 0x7f,
    0xc0, 0xf, 0xf0, 0x3, 0xfc, 0x0, 0xff, 0x0,
    0x3f, 0xc0, 0xf, 0xf8, 0x7, 0xfe, 0x1, 0xe7,
    0xe1, 0xf9, 0xff, 0xfe, 0x3f, 0xff, 0x7, 0xff,
    0xc0, 0x7f, 0xe0, 0x0, 0xf8, 0x0, 0x7c, 0x0,
    0x1f, 0x0, 0xf, 0x80, 0x7, 0xe0, 0x1, 0xf0,
    0x0, 0xfc, 0x0, 0x3e, 0x0, 0x1f, 0x80, 0x7,
    0xc0, 0x3, 0xf0, 0x0, 0xf8, 0x0, 0x7e, 0x0,

    /* U+003A ":" */
    0xff, 0xff, 0x0, 0x0, 0x0, 0xff, 0xff,

    /* U+003B ";" */
    0xff, 0xff, 0x0, 0x0, 0xf, 0xff, 0xff, 0xfc,
    0x80,

    /* U+003C "<" */
    0x0, 0x0, 0x6, 0x0, 0x0, 0x3c, 0x0, 0x1,
    0xf8, 0x0, 0xf, 0xf0, 0x0, 0xff, 0x80, 0x7,
    0xf8, 0x0, 0x3f, 0xc0, 0x1, 0xfe, 0x0, 0x1f,
    0xe0, 0x0, 0xff, 0x0, 0x3, 0xf8, 0x0, 0x7,
    0x80, 0x0, 0xf, 0xc0, 0x0, 0x1f, 0xe0, 0x0,
    0x7, 0xf8, 0x0, 0x3, 0xfc, 0x0, 0x1, 0xfe,
    0x0, 0x0, 0xff, 0x80, 0x0, 0x3f, 0xc0, 0x0,
    0x1f, 0xe0, 0x0, 0xf, 0xe0, 0x0, 0x7, 0xc0,
    0x0, 0x1, 0x80,

    /* U+003E ">" */
    0x80, 0x0, 0x1, 0xc0, 0x0, 0x3, 0xf0, 0x0,
    0x7, 0xf8, 0x0, 0x3, 0xfc, 0x0, 0x1, 0xfe,
    0x0, 0x0, 0xff, 0x80, 0x0, 0x3f, 0xc0, 0x0,
    0x1f, 0xe0, 0x0, 0xf, 0xf0, 0x0, 0x3, 0xf8,
    0x0, 0x1, 0xf0, 0x0, 0x7, 0xe0, 0x0, 0x7f,
    0x80, 0x3, 0xfc, 0x0, 0x1f, 0xe0, 0x1, 0xfe,
    0x0, 0xf, 0xf0, 0x0, 0x7f, 0x80, 0x7, 0xfc,
    0x0, 0xf, 0xc0, 0x0, 0x1e, 0x0, 0x0, 0x30,
    0x0, 0x0, 0x0,

    /* U+0040 "@" */
    0x0, 0xf, 0xf8, 0x0, 0x0, 0x7f, 0xff, 0x0,
    0x1, 0xff, 0xff, 0xc0, 0x3, 0xf8, 0x7, 0xe0,
    0x7, 0xc0, 0x1, 0xf0, 0xf, 0x80, 0x0, 0xf8,
    0x1f, 0x3, 0xe0, 0x7c, 0x3e, 0x1f, 0xf3, 0xbe,
    0x3c, 0x3f, 0xfb, 0x9e, 0x78, 0x7e, 0x1f, 0x1f,
    0x78, 0xf8, 0xf, 0xf, 0xf8, 0xf0, 0xf, 0xf,
    0xf1, 0xf0, 0xf, 0xf, 0xf1, 0xe0, 0xe, 0xf,
    0xf3, 0xe0, 0xe, 0xf, 0xf3, 0xc0, 0xe, 0xf,
    0xf3, 0xc0, 0xc, 0x1e, 0xf3, 0xc0, 0x1c, 0x1e,
    0xf3, 0xc0, 0x1c, 0x1e, 0xf3, 0xc0, 0x3c, 0x3c,
    0x7b, 0xe0, 0x78, 0x38, 0x79, 0xf0, 0xf8, 0x78,
    0x7d, 0xff, 0xf8, 0xe0, 0x3c, 0xff, 0x9f, 0xc0,
    0x3e, 0x3e, 0xf, 0x1e, 0x1f, 0x0, 0x0, 0x3c,
    0xf, 0x80, 0x0, 0x78, 0x7, 0xc0, 0x0, 0xf0,
    0x3, 0xf8, 0x7, 0xe0, 0x1, 0xff, 0xff, 0x80,
    0x0, 0x7f, 0xff, 0x0, 0x0, 0xf, 0xf8, 0x0,

    /* U+0041 "A" */
    0x0, 0x1f, 0x0, 0x0, 0x3, 0xe0, 0x0, 0x0,
    0x7c, 0x0, 0x0, 0x1f, 0xc0, 0x0, 0x3, 0xf8,
    0x0, 0x0, 0xff, 0x0, 0x0, 0x1f, 0xf0, 0x0,
    0x3, 0xde, 0x0, 0x0, 0xfb, 0xc0, 0x0, 0x1f,
    0x7c, 0x0, 0x3, 0xc7, 0x80, 0x0, 0xf8, 0xf8,
    0x0, 0x1f, 0x1f, 0x0, 0x3, 0xc1, 0xe0, 0x0,
    0xf8, 0x3e, 0x0, 0x1f, 0x7, 0xc0, 0x3, 0xc0,
    0x78, 0x0, 0xf8, 0xf, 0x80, 0x1f, 0x1, 0xf0,
    0x7, 0xc0, 0x1e, 0x0, 0xf8, 0x3, 0xe0, 0x1f,
    0xff, 0xfc, 0x7, 0xff, 0xff, 0x80, 0xff, 0xff,
    0xf8, 0x1f, 0xff, 0xff, 0x7, 0xc0, 0x1, 0xe0,
    0xf8, 0x0, 0x3e, 0x1f, 0x0, 0x7, 0xc7, 0xc0,
    0x0, 0x7c, 0xf8, 0x0, 0xf, 0x9f, 0x0, 0x1,
    0xf7, 0xc0, 0x0, 0x1f,

    /* U+0042 "B" */
    0xff, 0xff, 0x3, 0xff, 0xff, 0xf, 0xff, 0xff,
    0x3f, 0xff, 0xfc, 0xf8, 0x3, 0xfb, 0xe0, 0x3,
    0xef, 0x80, 0xf, 0xfe, 0x0, 0x1f, 0xf8, 0x0,
    0x7f, 0xe0, 0x1, 0xff, 0x80, 0x7, 0xfe, 0x0,
    0x3f, 0xf8, 0x0, 0xfb, 0xe0, 0xf, 0xcf, 0xff,
    0xfe, 0x3f, 0xff, 0xf0, 0xff, 0xff, 0xe3, 0xff,
    0xff, 0xcf, 0x80, 0x3f, 0xbe, 0x0, 0x3e, 0xf8,
    0x0, 0xff, 0xe0, 0x1, 0xff, 0x80, 0x7, 0xfe,
    0x0, 0x1f, 0xf8, 0x0, 0x7f, 0xe0, 0x3, 0xff,
    0x80, 0xf, 0xbe, 0x0, 0xfe, 0xff, 0xff, 0xf3,
    0xff, 0xff, 0xcf, 0xff, 0xfc, 0x3f, 0xff, 0xc0,

    /* U+0043 "C" */
    0x0, 0xfe, 0x0, 0xf, 0xfe, 0x0, 0xff, 0xfe,
    0x7, 0xff, 0xfc, 0x3f, 0x83, 0xf9, 0xf8, 0x7,
    0xe7, 0xe0, 0xf, 0xdf, 0x0, 0x1f, 0xfc, 0x0,
    0x7f, 0xe0, 0x0, 0xf, 0x80, 0x0, 0x3e, 0x0,
    0x0, 0xf8, 0x0, 0x3, 0xe0, 0x0, 0xf, 0x80,
    0x0, 0x3e, 0x0, 0x0, 0xf8, 0x0, 0x3, 0xe0,
    0x0, 0xf, 0x80, 0x0, 0x3e, 0x0, 0x0, 0xf8,
    0x0, 0x3, 0xe0, 0x0, 0xf, 0x80, 0x0, 0x3f,
    0x0, 0x1f, 0x7c, 0x0, 0x7d, 0xf8, 0x3, 0xf7,
    0xe0, 0x1f, 0x8f, 0xe0, 0xfe, 0x1f, 0xff, 0xf0,
    0x3f, 0xff, 0x80, 0x7f, 0xf8, 0x0, 0x3f, 0x80,

    /* U+0044 "D" */
    0xff, 0xfc, 0x3, 0xff, 0xfe, 0xf, 0xff, 0xfc,
    0x3f, 0xff, 0xf8, 0xf8, 0x7, 0xf3, 0xe0, 0x7,
    0xcf, 0x80, 0x1f, 0xbe, 0x0, 0x3e, 0xf8, 0x0,
    0xff, 0xe0, 0x1, 0xff, 0x80, 0x7, 0xfe, 0x0,
    0x1f, 0xf8, 0x0, 0x7f, 0xe0, 0x1, 0xff, 0x80,
    0x7, 0xfe, 0x0, 0x1f, 0xf8, 0x0, 0x7f, 0xe0,
    0x1, 0xff, 0x80, 0x7, 0xfe, 0x0, 0x1f, 0xf8,
    0x0, 0x7f, 0xe0, 0x1, 0xff, 0x80, 0x7, 0xfe,
    0x0, 0x1f, 0xf8, 0x0, 0xfb, 0xe0, 0x3, 0xef,
    0x80, 0x1f, 0x3e, 0x1, 0xfc, 0xff, 0xff, 0xe3,
    0xff, 0xff, 0xf, 0xff, 0xf0, 0x3f, 0xff, 0x0,

    /* U+0045 "E" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf8, 0x0, 0xf, 0x80, 0x0, 0xf8,
    0x0, 0xf, 0x80, 0x0, 0xf8, 0x0, 0xf, 0x80,
    0x0, 0xf8, 0x0, 0xf, 0x80, 0x0, 0xf8, 0x0,
    0xf, 0x80, 0x0, 0xff, 0xff, 0xcf, 0xff, 0xfc,
    0xff, 0xff, 0xcf, 0xff, 0xfc, 0xf8, 0x0, 0xf,
    0x80, 0x0, 0xf8, 0x0, 0xf, 0x80, 0x0, 0xf8,
    0x0, 0xf, 0x80, 0x0, 0xf8, 0x0, 0xf, 0x80,
    0x0, 0xf8, 0x0, 0xf, 0x80, 0x0, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+0046 "F" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf8, 0x0, 0xf, 0x80, 0x0, 0xf8,
    0x0, 0xf, 0x80, 0x0, 0xf8, 0x0, 0xf, 0x80,
    0x0, 0xf8, 0x0, 0xf, 0x80, 0x0, 0xf8, 0x0,
    0xf, 0x80, 0x0, 0xff, 0xff, 0xcf, 0xff, 0xfc,
    0xff, 0xff, 0xcf, 0xff, 0xfc, 0xf8, 0x0, 0xf,
    0x80, 0x0, 0xf8, 0x0, 0xf, 0x80, 0x0, 0xf8,
    0x0, 0xf, 0x80, 0x0, 0xf8, 0x0, 0xf, 0x80,
    0x0, 0xf8, 0x0, 0xf, 0x80, 0x0, 0xf8, 0x0,
    0xf, 0x80, 0x0, 0xf8, 0x0, 0xf, 0x80, 0x0,

    /* U+0047 "G" */
    0x0, 0xfe, 0x0, 0x1f, 0xfe, 0x0, 0xff, 0xfc,
    0x7, 0xff, 0xf8, 0x3f, 0x87, 0xf1, 0xf8, 0x7,
    0xe7, 0xc0, 0xf, 0x9f, 0x0, 0x3e, 0xfc, 0x0,
    0x7f, 0xe0, 0x0, 0xf, 0x80, 0x0, 0x3e, 0x0,
    0x0, 0xf8, 0x0, 0x3, 0xe0, 0x0, 0xf, 0x81,
    0xff, 0xfe, 0x7, 0xff, 0xf8, 0x1f, 0xff, 0xe0,
    0x7f, 0xff, 0x80, 0x7, 0xfe, 0x0, 0x1f, 0xf8,
    0x0, 0x7f, 0xe0, 0x1, 0xff, 0x80, 0x7, 0xfe,
    0x0, 0x3f, 0x7c, 0x0, 0xf9, 0xf0, 0x7, 0xe7,
    0xe0, 0x1f, 0xf, 0xe1, 0xfc, 0x1f, 0xff, 0xe0,
    0x3f, 0xff, 0x0, 0x7f, 0xf8, 0x0, 0x3f, 0x0,

    /* U+0048 "H" */
    0xf8, 0x0, 0x7f, 0xe0, 0x1, 0xff, 0x80, 0x7,
    0xfe, 0x0, 0x1f, 0xf8, 0x0, 0x7f, 0xe0, 0x1,
    0xff, 0x80, 0x7, 0xfe, 0x0, 0x1f, 0xf8, 0x0,
    0x7f, 0xe0, 0x1, 0xff, 0x80, 0x7, 0xfe, 0x0,
    0x1f, 0xf8, 0x0, 0x7f, 0xe0, 0x1, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x80, 0x7, 0xfe, 0x0, 0x1f, 0xf8,
    0x0, 0x7f, 0xe0, 0x1, 0xff, 0x80, 0x7, 0xfe,
    0x0, 0x1f, 0xf8, 0x0, 0x7f, 0xe0, 0x1, 0xff,
    0x80, 0x7, 0xfe, 0x0, 0x1f, 0xf8, 0x0, 0x7f,
    0xe0, 0x1, 0xff, 0x80, 0x7, 0xfe, 0x0, 0x1f,

    /* U+0049 "I" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff,

    /* U+004A "J" */
    0x0, 0x7, 0xc0, 0x1, 0xf0, 0x0, 0x7c, 0x0,
    0x1f, 0x0, 0x7, 0xc0, 0x1, 0xf0, 0x0, 0x7c,
    0x0, 0x1f, 0x0, 0x7, 0xc0, 0x1, 0xf0, 0x0,
    0x7c, 0x0, 0x1f, 0x0, 0x7, 0xc0, 0x1, 0xf0,
    0x0, 0x7c, 0x0, 0x1f, 0x0, 0x7, 0xc0, 0x1,
    0xf0, 0x0, 0x7c, 0x0, 0x1f, 0x0, 0x7, 0xc0,
    0x1, 0xf0, 0x0, 0x7c, 0x0, 0x1f, 0x0, 0x7,
    0xc0, 0x3, 0xe3, 0x1, 0xf9, 0xe0, 0xfc, 0xff,
    0xff, 0x1f, 0xff, 0x83, 0xff, 0x80, 0x3f, 0x80,

    /* U+004B "K" */
    0xf8, 0x0, 0x3e, 0x7c, 0x0, 0x3e, 0x3e, 0x0,
    0x3f, 0x1f, 0x0, 0x3f, 0xf, 0x80, 0x3f, 0x7,
    0xc0, 0x1f, 0x3, 0xe0, 0x1f, 0x1, 0xf0, 0x1f,
    0x80, 0xf8, 0x1f, 0x80, 0x7c, 0xf, 0x80, 0x3e,
    0xf, 0x80, 0x1f, 0xf, 0x80, 0xf, 0x8f, 0xc0,
    0x7, 0xcf, 0xe0, 0x3, 0xe7, 0xf8, 0x1, 0xf7,
    0xfc, 0x0, 0xff, 0xdf, 0x0, 0x7f, 0xcf, 0x80,
    0x3f, 0xe3, 0xe0, 0x1f, 0xe1, 0xf8, 0xf, 0xe0,
    0x7c, 0x7, 0xe0, 0x3f, 0x3, 0xe0, 0xf, 0x81,
    0xf0, 0x7, 0xe0, 0xf8, 0x1, 0xf0, 0x7c, 0x0,
    0x7c, 0x3e, 0x0, 0x3f, 0x1f, 0x0, 0xf, 0x8f,
    0x80, 0x7, 0xe7, 0xc0, 0x1, 0xf3, 0xe0, 0x0,
    0xfd, 0xf0, 0x0, 0x3e,

    /* U+004C "L" */
    0xf8, 0x0, 0xf, 0x80, 0x0, 0xf8, 0x0, 0xf,
    0x80, 0x0, 0xf8, 0x0, 0xf, 0x80, 0x0, 0xf8,
    0x0, 0xf, 0x80, 0x0, 0xf8, 0x0, 0xf, 0x80,
    0x0, 0xf8, 0x0, 0xf, 0x80, 0x0, 0xf8, 0x0,
    0xf, 0x80, 0x0, 0xf8, 0x0, 0xf, 0x80, 0x0,
    0xf8, 0x0, 0xf, 0x80, 0x0, 0xf8, 0x0, 0xf,
    0x80, 0x0, 0xf8, 0x0, 0xf, 0x80, 0x0, 0xf8,
    0x0, 0xf, 0x80, 0x0, 0xf8, 0x0, 0xf, 0x80,
    0x0, 0xf8, 0x0, 0xf, 0x80, 0x0, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+004D "M" */
    0xf8, 0x0, 0x3, 0xff, 0x0, 0x0, 0x7f, 0xf0,
    0x0, 0x1f, 0xfe, 0x0, 0x3, 0xff, 0xe0, 0x0,
    0xff, 0xfc, 0x0, 0x1f, 0xff, 0x80, 0x3, 0xff,
    0xf8, 0x0, 0xff, 0xff, 0x0, 0x1f, 0xff, 0xf0,
    0x7, 0xff, 0xfe, 0x0, 0xff, 0xff, 0xe0, 0x3f,
    0xff, 0xfc, 0x7, 0xff, 0xf7, 0x80, 0xf7, 0xfe,
    0xf8, 0x3e, 0xff, 0xdf, 0x7, 0x9f, 0xf9, 0xf1,
    0xf3, 0xff, 0x3e, 0x3e, 0x7f, 0xe3, 0xe7, 0x8f,
    0xfc, 0x7d, 0xf1, 0xff, 0x87, 0xbc, 0x3f, 0xf0,
    0xff, 0x87, 0xfe, 0x1f, 0xf0, 0xff, 0xc1, 0xfc,
    0x1f, 0xf8, 0x3f, 0x83, 0xff, 0x3, 0xe0, 0x7f,
    0xe0, 0x7c, 0xf, 0xfc, 0x0, 0x1, 0xff, 0x80,
    0x0, 0x3f, 0xf0, 0x0, 0x7, 0xfe, 0x0, 0x0,
    0xff, 0xc0, 0x0, 0x1f,

    /* U+004E "N" */
    0xf8, 0x0, 0x1f, 0xfc, 0x0, 0x1f, 0xfc, 0x0,
    0x1f, 0xfe, 0x0, 0x1f, 0xff, 0x0, 0x1f, 0xff,
    0x0, 0x1f, 0xff, 0x80, 0x1f, 0xff, 0x80, 0x1f,
    0xff, 0xc0, 0x1f, 0xff, 0xe0, 0x1f, 0xfb, 0xe0,
    0x1f, 0xfb, 0xf0, 0x1f, 0xf9, 0xf8, 0x1f, 0xf8,
    0xf8, 0x1f, 0xf8, 0xfc, 0x1f, 0xf8, 0x7c, 0x1f,
    0xf8, 0x3e, 0x1f, 0xf8, 0x3f, 0x1f, 0xf8, 0x1f,
    0x1f, 0xf8, 0x1f, 0x9f, 0xf8, 0xf, 0xdf, 0xf8,
    0x7, 0xdf, 0xf8, 0x7, 0xff, 0xf8, 0x3, 0xff,
    0xf8, 0x1, 0xff, 0xf8, 0x1, 0xff, 0xf8, 0x0,
    0xff, 0xf8, 0x0, 0xff, 0xf8, 0x0, 0x7f, 0xf8,
    0x0, 0x3f, 0xf8, 0x0, 0x3f, 0xf8, 0x0, 0x1f,

    /* U+004F "O" */
    0x0, 0xfc, 0x0, 0x1f, 0xfe, 0x0, 0xff, 0xfc,
    0x7, 0xff, 0xf8, 0x3f, 0x87, 0xf1, 0xf8, 0x7,
    0xe7, 0xc0, 0xf, 0x9f, 0x0, 0x3e, 0xfc, 0x0,
    0xff, 0xe0, 0x1, 0xff, 0x80, 0x7, 0xfe, 0x0,
    0x1f, 0xf8, 0x0, 0x7f, 0xe0, 0x1, 0xff, 0x80,
    0x7, 0xfe, 0x0, 0x1f, 0xf8, 0x0, 0x7f, 0xe0,
    0x1, 0xff, 0x80, 0x7, 0xfe, 0x0, 0x1f, 0xf8,
    0x0, 0x7f, 0xe0, 0x1, 0xff, 0x80, 0x7, 0xfe,
    0x0, 0x3f, 0x7c, 0x0, 0xf9, 0xf0, 0x3, 0xe7,
    0xe0, 0x1f, 0x8f, 0xe1, 0xfc, 0x1f, 0xff, 0xe0,
    0x3f, 0xff, 0x0, 0x7f, 0xf8, 0x0, 0x3f, 0x80,

    /* U+0050 "P" */
    0xff, 0xfe, 0x3, 0xff, 0xff, 0xf, 0xff, 0xfe,
    0x3f, 0xff, 0xfc, 0xf8, 0x3, 0xfb, 0xe0, 0x3,
    0xef, 0x80, 0xf, 0xfe, 0x0, 0x1f, 0xf8, 0x0,
    0x7f, 0xe0, 0x1, 0xff, 0x80, 0x7, 0xfe, 0x0,
    0x1f, 0xf8, 0x0, 0xff, 0xe0, 0x3, 0xef, 0x80,
    0x3f, 0xbf, 0xff, 0xfc, 0xff, 0xff, 0xe3, 0xff,
    0xff, 0xf, 0xff, 0xf0, 0x3e, 0x0, 0x0, 0xf8,
    0x0, 0x3, 0xe0, 0x0, 0xf, 0x80, 0x0, 0x3e,
    0x0, 0x0, 0xf8, 0x0, 0x3, 0xe0, 0x0, 0xf,
    0x80, 0x0, 0x3e, 0x0, 0x0, 0xf8, 0x0, 0x3,
    0xe0, 0x0, 0xf, 0x80, 0x0, 0x3e, 0x0, 0x0,

    /* U+0051 "Q" */
    0x0, 0xfc, 0x0, 0x3, 0xff, 0xc0, 0x3, 0xff,
    0xf0, 0x3, 0xff, 0xfc, 0x3, 0xf8, 0x7f, 0x3,
    0xf0, 0xf, 0x81, 0xf0, 0x3, 0xe0, 0xf8, 0x1,
    0xf0, 0xfc, 0x0, 0xfc, 0x7c, 0x0, 0x3e, 0x3e,
    0x0, 0x1f, 0x1f, 0x0, 0xf, 0x8f, 0x80, 0x7,
    0xc7, 0xc0, 0x3, 0xe3, 0xe0, 0x1, 0xf1, 0xf0,
    0x0, 0xf8, 0xf8, 0x0, 0x7c, 0x7c, 0x0, 0x3e,
    0x3e, 0x0, 0x1f, 0x1f, 0x0, 0xf, 0x8f, 0x80,
    0x47, 0xc7, 0xc0, 0x73, 0xe3, 0xe0, 0x7d, 0xf1,
    0xf0, 0x3f, 0xf8, 0x7c, 0xf, 0xfc, 0x3e, 0x3,
    0xfc, 0x1f, 0x80, 0xfe, 0x7, 0xf0, 0xff, 0x81,
    0xff, 0xff, 0xe0, 0x7f, 0xff, 0xfc, 0x1f, 0xfe,
    0x7c, 0x3, 0xf8, 0x1c, 0x0, 0x0, 0x0, 0x0,

    /* U+0052 "R" */
    0xff, 0xfe, 0x3, 0xff, 0xfe, 0xf, 0xff, 0xfc,
    0x3f, 0xff, 0xf8, 0xf8, 0x1, 0xf3, 0xe0, 0x3,
    0xcf, 0x80, 0x7, 0xbe, 0x0, 0x1e, 0xf8, 0x0,
    0x7b, 0xe0, 0x1, 0xef, 0x80, 0x7, 0xbe, 0x0,
    0x3e, 0xf8, 0x0, 0xf3, 0xe0, 0xf, 0xcf, 0xff,
    0xfe, 0x3f, 0xff, 0xf0, 0xff, 0xff, 0x83, 0xff,
    0xf8, 0xf, 0x81, 0xf0, 0x3e, 0x7, 0xc0, 0xf8,
    0xf, 0x83, 0xe0, 0x3e, 0xf, 0x80, 0x7c, 0x3e,
    0x1, 0xf0, 0xf8, 0x3, 0xe3, 0xe0, 0xf, 0x8f,
    0x80, 0x1f, 0x3e, 0x0, 0x7c, 0xf8, 0x1, 0xfb,
    0xe0, 0x3, 0xef, 0x80, 0xf, 0xfe, 0x0, 0x1f,

    /* U+0053 "S" */
    0x0, 0xff, 0x0, 0x7, 0xff, 0xc0, 0x1f, 0xff,
    0xf0, 0x7f, 0xff, 0xc1, 0xfc, 0x1f, 0x83, 0xe0,
    0xe, 0xf, 0x80, 0x0, 0x1f, 0x0, 0x0, 0x3e,
    0x0, 0x0, 0x7c, 0x0, 0x0, 0xfc, 0x0, 0x1,
    0xf8, 0x0, 0x3, 0xfc, 0x0, 0x3, 0xff, 0xe0,
    0x7, 0xff, 0xf8, 0x7, 0xff, 0xf8, 0x7, 0xff,
    0xf8, 0x3, 0xff, 0xf8, 0x0, 0xff, 0xf0, 0x0,
    0xf, 0xf0, 0x0, 0x7, 0xe0, 0x0, 0x7, 0xc0,
    0x0, 0xf, 0x80, 0x0, 0x1f, 0x0, 0x0, 0x3e,
    0x30, 0x0, 0xfc, 0xf0, 0x1, 0xf3, 0xfc, 0xf,
    0xe7, 0xff, 0xff, 0x83, 0xff, 0xfe, 0x3, 0xff,
    0xf8, 0x0, 0x7f, 0x80,

    /* U+0054 "T" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x0, 0xf8, 0x0, 0x3, 0xe0,
    0x0, 0xf, 0x80, 0x0, 0x3e, 0x0, 0x0, 0xf8,
    0x0, 0x3, 0xe0, 0x0, 0xf, 0x80, 0x0, 0x3e,
    0x0, 0x0, 0xf8, 0x0, 0x3, 0xe0, 0x0, 0xf,
    0x80, 0x0, 0x3e, 0x0, 0x0, 0xf8, 0x0, 0x3,
    0xe0, 0x0, 0xf, 0x80, 0x0, 0x3e, 0x0, 0x0,
    0xf8, 0x0, 0x3, 0xe0, 0x0, 0xf, 0x80, 0x0,
    0x3e, 0x0, 0x0, 0xf8, 0x0, 0x3, 0xe0, 0x0,
    0xf, 0x80, 0x0, 0x3e, 0x0, 0x0, 0xf8, 0x0,
    0x3, 0xe0, 0x0, 0xf, 0x80, 0x0, 0x3e, 0x0,

    /* U+0055 "U" */
    0xf8, 0x0, 0x7f, 0xe0, 0x1, 0xff, 0x80, 0x7,
    0xfe, 0x0, 0x1f, 0xf8, 0x0, 0x7f, 0xe0, 0x1,
    0xff, 0x80, 0x7, 0xfe, 0x0, 0x1f, 0xf8, 0x0,
    0x7f, 0xe0, 0x1, 0xff, 0x80, 0x7, 0xfe, 0x0,
    0x1f, 0xf8, 0x0, 0x7f, 0xe0, 0x1, 0xff, 0x80,
    0x7, 0xfe, 0x0, 0x1f, 0xf8, 0x0, 0x7f, 0xe0,
    0x1, 0xff, 0x80, 0x7, 0xfe, 0x0, 0x1f, 0xf8,
    0x0, 0x7f, 0xe0, 0x1, 0xff, 0x80, 0x7, 0xfe,
    0x0, 0x1f, 0xfc, 0x0, 0xfd, 0xf0, 0x3, 0xe7,
    0xe0, 0x1f, 0x8f, 0xe1, 0xfc, 0x1f, 0xff, 0xe0,
    0x3f, 0xff, 0x0, 0x7f, 0xf8, 0x0, 0x7f, 0x0,

    /* U+0056 "V" */
    0xf8, 0x0, 0x1f, 0x7c, 0x0, 0x1f, 0x7c, 0x0,
    0x1f, 0x7c, 0x0, 0x3e, 0x3c, 0x0, 0x3e, 0x3e,
    0x0, 0x3e, 0x3e, 0x0, 0x7c, 0x3e, 0x0, 0x7c,
    0x1f, 0x0, 0x7c, 0x1f, 0x0, 0x78, 0x1f, 0x0,
    0xf8, 0xf, 0x0, 0xf8, 0xf, 0x80, 0xf0, 0xf,
    0x81, 0xf0, 0x7, 0x81, 0xf0, 0x7, 0xc1, 0xe0,
    0x7, 0xc1, 0xe0, 0x3, 0xc3, 0xe0, 0x3, 0xc3,
    0xc0, 0x3, 0xe3, 0xc0, 0x1, 0xe7, 0xc0, 0x1,
    0xe7, 0x80, 0x1, 0xf7, 0x80, 0x0, 0xf7, 0x80,
    0x0, 0xff, 0x80, 0x0, 0xff, 0x0, 0x0, 0x7f,
    0x0, 0x0, 0x7f, 0x0, 0x0, 0x7e, 0x0, 0x0,
    0x3e, 0x0, 0x0, 0x3e, 0x0, 0x0, 0x3c, 0x0,

    /* U+0057 "W" */
    0x7c, 0x0, 0xf0, 0x1, 0xf7, 0xc0, 0xf, 0x0,
    0x1f, 0x7c, 0x0, 0xf8, 0x1, 0xf7, 0xc0, 0xf,
    0x80, 0x3e, 0x3c, 0x1, 0xf8, 0x3, 0xe3, 0xe0,
    0x1f, 0x80, 0x3e, 0x3e, 0x1, 0xfc, 0x3, 0xe3,
    0xe0, 0x1f, 0xc0, 0x7c, 0x1e, 0x3, 0xfc, 0x7,
    0xc1, 0xf0, 0x3f, 0xe0, 0x7c, 0x1f, 0x3, 0xde,
    0x7, 0xc1, 0xf0, 0x3d, 0xe0, 0x78, 0xf, 0x7,
    0x9e, 0xf, 0x80, 0xf0, 0x78, 0xf0, 0xf8, 0xf,
    0x87, 0x8f, 0xf, 0x80, 0xf8, 0xf8, 0xf0, 0xf0,
    0x7, 0x8f, 0xf, 0xf, 0x0, 0x78, 0xf0, 0x79,
    0xf0, 0x7, 0xcf, 0x7, 0x9f, 0x0, 0x7d, 0xf0,
    0x79, 0xe0, 0x7, 0xde, 0x7, 0xde, 0x0, 0x3d,
    0xe0, 0x3f, 0xe0, 0x3, 0xde, 0x3, 0xfe, 0x0,
    0x3f, 0xe0, 0x3f, 0xc0, 0x3, 0xfc, 0x3, 0xfc,
    0x0, 0x1f, 0xc0, 0x1f, 0xc0, 0x1, 0xfc, 0x1,
    0xfc, 0x0, 0x1f, 0x80, 0x1f, 0x80, 0x1, 0xf8,
    0x1, 0xf8, 0x0, 0xf, 0x80, 0xf, 0x80, 0x0,
    0xf8, 0x0, 0xf8, 0x0, 0xf, 0x0, 0xf, 0x0,

    /* U+0058 "X" */
    0xfc, 0x0, 0x3e, 0x7c, 0x0, 0x7e, 0x3e, 0x0,
    0x7c, 0x3f, 0x0, 0xf8, 0x1f, 0x1, 0xf8, 0x1f,
    0x81, 0xf0, 0xf, 0x83, 0xf0, 0x7, 0xc3, 0xe0,
    0x7, 0xc7, 0xe0, 0x3, 0xe7, 0xc0, 0x3, 0xef,
    0x80, 0x1, 0xff, 0x80, 0x1, 0xff, 0x0, 0x0,
    0xff, 0x0, 0x0, 0x7e, 0x0, 0x0, 0x7e, 0x0,
    0x0, 0x7e, 0x0, 0x0, 0xff, 0x0, 0x1, 0xff,
    0x0, 0x1, 0xff, 0x80, 0x3, 0xff, 0x80, 0x3,
    0xe7, 0xc0, 0x7, 0xc7, 0xc0, 0x7, 0xc3, 0xe0,
    0xf, 0x83, 0xf0, 0x1f, 0x81, 0xf0, 0x1f, 0x1,
    0xf8, 0x3f, 0x0, 0xf8, 0x3e, 0x0, 0x7c, 0x7c,
    0x0, 0x7e, 0xfc, 0x0, 0x3e, 0xf8, 0x0, 0x3f,

    /* U+0059 "Y" */
    0xf8, 0x0, 0x7f, 0xe0, 0x1, 0xf7, 0xc0, 0xf,
    0x9f, 0x0, 0x3e, 0x3e, 0x1, 0xf0, 0xf8, 0x7,
    0xc1, 0xf0, 0x3e, 0x7, 0xc0, 0xf8, 0xf, 0x3,
    0xc0, 0x3e, 0x1f, 0x0, 0x78, 0x78, 0x1, 0xf3,
    0xe0, 0x3, 0xcf, 0x0, 0xf, 0xfc, 0x0, 0x1f,
    0xe0, 0x0, 0x7f, 0x80, 0x0, 0xfc, 0x0, 0x3,
    0xf0, 0x0, 0x7, 0x80, 0x0, 0x1e, 0x0, 0x0,
    0x78, 0x0, 0x1, 0xe0, 0x0, 0x7, 0x80, 0x0,
    0x1e, 0x0, 0x0, 0x78, 0x0, 0x1, 0xe0, 0x0,
    0x7, 0x80, 0x0, 0x1e, 0x0, 0x0, 0x78, 0x0,
    0x1, 0xe0, 0x0, 0x7, 0x80, 0x0, 0x1e, 0x0,

    /* U+005A "Z" */
    0x7f, 0xff, 0xf7, 0xff, 0xff, 0x7f, 0xff, 0xf7,
    0xff, 0xff, 0x0, 0x3, 0xe0, 0x0, 0x7e, 0x0,
    0x7, 0xc0, 0x0, 0xfc, 0x0, 0xf, 0x80, 0x1,
    0xf8, 0x0, 0x1f, 0x0, 0x3, 0xe0, 0x0, 0x7e,
    0x0, 0x7, 0xc0, 0x0, 0xfc, 0x0, 0xf, 0x80,
    0x1, 0xf8, 0x0, 0x3f, 0x0, 0x3, 0xe0, 0x0,
    0x7e, 0x0, 0x7, 0xc0, 0x0, 0xfc, 0x0, 0x1f,
    0x80, 0x1, 0xf8, 0x0, 0x3f, 0x0, 0x3, 0xe0,
    0x0, 0x7e, 0x0, 0x7, 0xc0, 0x0, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+005B "[" */
    0xff, 0xff, 0xff, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0,
    0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0,
    0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0,
    0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0,
    0xf0, 0xf0, 0xff, 0xff, 0xff,

    /* U+005D "]" */
    0xff, 0xff, 0xff, 0xf, 0xf, 0xf, 0xf, 0xf,
    0xf, 0xf, 0xf, 0xf, 0xf, 0xf, 0xf, 0xf,
    0xf, 0xf, 0xf, 0xf, 0xf, 0xf, 0xf, 0xf,
    0xf, 0xf, 0xf, 0xf, 0xf, 0xf, 0xf, 0xf,
    0xf, 0xf, 0xff, 0xff, 0xff,

    /* U+005E "^" */
    0x0, 0x78, 0x0, 0x1, 0xe0, 0x0, 0xf, 0xc0,
    0x0, 0x3f, 0x0, 0x1, 0xee, 0x0, 0x7, 0x38,
    0x0, 0x3c, 0x70, 0x0, 0xe1, 0xc0, 0x7, 0x87,
    0x80, 0x1c, 0xe, 0x0, 0xf0, 0x3c, 0x3, 0x80,
    0x70, 0x1e, 0x1, 0xe0, 0x78, 0x3, 0x83, 0xc0,
    0xf, 0xf, 0x0, 0x1c, 0x78, 0x0, 0x79, 0xe0,
    0x0, 0xef, 0x0, 0x3, 0xc0,

    /* U+007B "{" */
    0x3, 0xf0, 0x7f, 0xf, 0xf0, 0xf8, 0xf, 0x0,
    0xf0, 0xf, 0x0, 0xf0, 0xf, 0x0, 0xf0, 0xf,
    0x0, 0xf0, 0xf, 0x0, 0xf0, 0x1f, 0x1, 0xe0,
    0x3e, 0xf, 0xc0, 0xf8, 0xf, 0xc0, 0x3e, 0x1,
    0xe0, 0x1f, 0x0, 0xf0, 0xf, 0x0, 0xf0, 0xf,
    0x0, 0xf0, 0xf, 0x0, 0xf0, 0xf, 0x0, 0xf0,
    0xf, 0x0, 0xf8, 0x7, 0xf0, 0x7f, 0x3, 0xf0,

    /* U+007D "}" */
    0xfc, 0xf, 0xe0, 0xfe, 0x1, 0xf0, 0xf, 0x0,
    0xf0, 0xf, 0x0, 0xf0, 0xf, 0x0, 0xf0, 0xf,
    0x0, 0xf0, 0xf, 0x0, 0xf0, 0xf, 0x0, 0x78,
    0x7, 0xc0, 0x3f, 0x1, 0xf0, 0x3f, 0x7, 0xc0,
    0xf8, 0xf, 0x80, 0xf0, 0xf, 0x0, 0xf0, 0xf,
    0x0, 0xf0, 0xf, 0x0, 0xf0, 0xf, 0x0, 0xf0,
    0xf, 0x1, 0xf0, 0xff, 0xf, 0xe0, 0xfc, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 169, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 182, .box_w = 6, .box_h = 32, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 25, .adv_w = 234, .box_w = 9, .box_h = 8, .ofs_x = 3, .ofs_y = 24},
    {.bitmap_index = 34, .adv_w = 338, .box_w = 21, .box_h = 32, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 118, .adv_w = 338, .box_w = 20, .box_h = 40, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 218, .adv_w = 365, .box_w = 19, .box_h = 32, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 294, .adv_w = 456, .box_w = 26, .box_h = 32, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 398, .adv_w = 169, .box_w = 4, .box_h = 8, .ofs_x = 4, .ofs_y = 24},
    {.bitmap_index = 402, .adv_w = 196, .box_w = 8, .box_h = 36, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 438, .adv_w = 196, .box_w = 8, .box_h = 36, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 474, .adv_w = 248, .box_w = 13, .box_h = 13, .ofs_x = 1, .ofs_y = 19},
    {.bitmap_index = 496, .adv_w = 169, .box_w = 4, .box_h = 8, .ofs_x = 3, .ofs_y = -3},
    {.bitmap_index = 500, .adv_w = 169, .box_w = 4, .box_h = 4, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 502, .adv_w = 338, .box_w = 18, .box_h = 32, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 574, .adv_w = 338, .box_w = 9, .box_h = 32, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 610, .adv_w = 338, .box_w = 18, .box_h = 32, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 682, .adv_w = 338, .box_w = 19, .box_h = 32, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 758, .adv_w = 338, .box_w = 20, .box_h = 32, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 838, .adv_w = 338, .box_w = 18, .box_h = 32, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 910, .adv_w = 338, .box_w = 18, .box_h = 32, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 982, .adv_w = 338, .box_w = 18, .box_h = 32, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1054, .adv_w = 338, .box_w = 19, .box_h = 32, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1130, .adv_w = 338, .box_w = 18, .box_h = 32, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1202, .adv_w = 169, .box_w = 4, .box_h = 14, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 1209, .adv_w = 169, .box_w = 4, .box_h = 17, .ofs_x = 3, .ofs_y = -3},
    {.bitmap_index = 1218, .adv_w = 422, .box_w = 23, .box_h = 23, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1285, .adv_w = 422, .box_w = 23, .box_h = 23, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1352, .adv_w = 563, .box_w = 32, .box_h = 32, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1480, .adv_w = 429, .box_w = 27, .box_h = 32, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1588, .adv_w = 429, .box_w = 22, .box_h = 32, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 1676, .adv_w = 391, .box_w = 22, .box_h = 32, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1764, .adv_w = 444, .box_w = 22, .box_h = 32, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 1852, .adv_w = 391, .box_w = 20, .box_h = 32, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 1932, .adv_w = 378, .box_w = 20, .box_h = 32, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 2012, .adv_w = 429, .box_w = 22, .box_h = 32, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2100, .adv_w = 456, .box_w = 22, .box_h = 32, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 2188, .adv_w = 182, .box_w = 5, .box_h = 32, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 2208, .adv_w = 339, .box_w = 18, .box_h = 32, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2280, .adv_w = 444, .box_w = 25, .box_h = 32, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 2380, .adv_w = 391, .box_w = 20, .box_h = 32, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 2460, .adv_w = 534, .box_w = 27, .box_h = 32, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 2568, .adv_w = 482, .box_w = 24, .box_h = 32, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 2664, .adv_w = 429, .box_w = 22, .box_h = 32, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2752, .adv_w = 417, .box_w = 22, .box_h = 32, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 2840, .adv_w = 429, .box_w = 25, .box_h = 33, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 2944, .adv_w = 429, .box_w = 22, .box_h = 32, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 3032, .adv_w = 404, .box_w = 23, .box_h = 32, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3124, .adv_w = 352, .box_w = 22, .box_h = 32, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3212, .adv_w = 444, .box_w = 22, .box_h = 32, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 3300, .adv_w = 391, .box_w = 24, .box_h = 32, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3396, .adv_w = 586, .box_w = 36, .box_h = 32, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3540, .adv_w = 377, .box_w = 24, .box_h = 32, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3636, .adv_w = 352, .box_w = 22, .box_h = 32, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3724, .adv_w = 365, .box_w = 20, .box_h = 32, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3804, .adv_w = 196, .box_w = 8, .box_h = 37, .ofs_x = 3, .ofs_y = -5},
    {.bitmap_index = 3841, .adv_w = 196, .box_w = 8, .box_h = 37, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 3878, .adv_w = 422, .box_w = 22, .box_h = 19, .ofs_x = 2, .ofs_y = 13},
    {.bitmap_index = 3931, .adv_w = 196, .box_w = 12, .box_h = 37, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 3987, .adv_w = 196, .box_w = 12, .box_h = 37, .ofs_x = 1, .ofs_y = -5}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint8_t glyph_id_ofs_list_0[] = {
    0, 1, 2, 3, 4, 5, 6, 7,
    8, 9, 10, 0, 11, 0, 12, 0,
    13, 14, 15, 16, 17, 18, 19, 20,
    21, 22, 23, 24, 25, 0, 26
};

static const uint16_t unicode_list_2[] = {
    0x0, 0x1, 0x1e, 0x20
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 31, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = glyph_id_ofs_list_0, .list_length = 31, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_FULL
    },
    {
        .range_start = 64, .range_length = 28, .glyph_id_start = 28,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 93, .range_length = 33, .glyph_id_start = 56,
        .unicode_list = unicode_list_2, .glyph_id_ofs_list = NULL, .list_length = 4, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    29, 31,
    29, 35,
    29, 43,
    29, 45,
    29, 48,
    29, 49,
    29, 50,
    29, 51,
    29, 53,
    32, 29,
    32, 50,
    32, 53,
    34, 12,
    34, 13,
    34, 29,
    38, 12,
    38, 13,
    39, 43,
    40, 48,
    40, 50,
    40, 51,
    40, 53,
    43, 12,
    43, 13,
    43, 29,
    43, 48,
    43, 50,
    43, 51,
    43, 52,
    43, 53,
    44, 12,
    44, 13,
    44, 29,
    45, 49,
    46, 48,
    46, 50,
    46, 51,
    46, 53,
    48, 12,
    48, 13,
    48, 24,
    48, 25,
    48, 29,
    48, 43,
    49, 12,
    49, 13,
    49, 29,
    50, 12,
    50, 13,
    50, 24,
    50, 25,
    50, 29,
    50, 35,
    50, 43,
    51, 12,
    51, 13,
    51, 24,
    51, 25,
    51, 29,
    53, 12,
    53, 13,
    53, 24,
    53, 25,
    53, 29,
    53, 43
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -13, -13, -13, -13, -52, -13, -39, -26,
    -52, -13, -8, -17, -91, -91, -39, -13,
    -13, -17, -78, -78, -52, -91, -18, -18,
    -13, -13, -18, -13, -8, -21, -91, -91,
    -52, -4, -13, -13, -13, -21, -70, -78,
    -70, -70, -52, -13, -18, -18, -18, -91,
    -91, -52, -52, -39, -13, -13, -52, -52,
    -13, -13, -26, -78, -78, -65, -65, -52,
    -18
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 65,
    .glyph_ids_size = 0
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 3,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t signalis_std = {
#else
lv_font_t signalis_std = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 40,          /*The maximum line height required by the font*/
    .base_line = 5,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -3,
    .underline_thickness = 2,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if SIGNALIS_STD*/

