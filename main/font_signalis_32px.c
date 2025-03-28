/*******************************************************************************
 * Size: 32 px
 * Bpp: 1
 * Opts: --bpp 1 --size 32 --font DINMittelschriftStd.ttf --symbols ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890<>(){}[]:;,.'"!@#$%^&*  --format lvgl -o signalis_32px.c
 ******************************************************************************/

#include "fonts.h"
#include "lvgl.h"

#ifndef SIGNALIS_32PX
#define SIGNALIS_32PX 1
#endif

#if SIGNALIS_32PX

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xd2, 0x48, 0x1,
    0xff,

    /* U+0022 "\"" */
    0xef, 0xdf, 0xbf, 0x7e, 0xfd, 0xc0,

    /* U+0023 "#" */
    0x6, 0x38, 0xc, 0x70, 0x18, 0xe0, 0x31, 0xc0,
    0xe3, 0x1, 0xc6, 0x3, 0x8c, 0x3f, 0xff, 0x7f,
    0xfe, 0x18, 0xe0, 0x31, 0xc0, 0x63, 0x81, 0xc6,
    0x3, 0x8c, 0x7, 0x18, 0x7f, 0xfe, 0xff, 0xfc,
    0x31, 0xc0, 0x63, 0x80, 0xc7, 0x3, 0x8c, 0x7,
    0x18, 0xe, 0x30, 0x1c, 0x60,

    /* U+0024 "$" */
    0x3, 0x0, 0xc, 0x0, 0xfe, 0x7, 0xfe, 0x3f,
    0xf8, 0xed, 0xe7, 0x30, 0x1c, 0xc0, 0x73, 0x1,
    0xcc, 0x7, 0x30, 0x1e, 0xc0, 0x3f, 0x80, 0x7f,
    0x80, 0xff, 0x80, 0xfe, 0x3, 0x3c, 0xc, 0x70,
    0x31, 0xc0, 0xc7, 0x3, 0x1d, 0x8c, 0xff, 0xb7,
    0x9f, 0xfe, 0x3f, 0xf0, 0x7f, 0x0, 0x30, 0x0,
    0xc0, 0x3, 0x0, 0xc, 0x0,

    /* U+0025 "%" */
    0x78, 0x3f, 0xe1, 0xb3, 0x1d, 0x98, 0xcc, 0xc6,
    0x66, 0x63, 0x33, 0x1f, 0xb8, 0x79, 0x80, 0x1c,
    0x0, 0xc0, 0x6, 0x0, 0x60, 0x3, 0x0, 0x38,
    0x1, 0x9e, 0x1d, 0xf8, 0xcc, 0xc6, 0x66, 0x63,
    0x33, 0x19, 0xb8, 0xcd, 0x87, 0xfc, 0x1e,

    /* U+0026 "&" */
    0x7, 0xc0, 0x0, 0xfe, 0x0, 0x1f, 0xf0, 0x3,
    0xc7, 0x80, 0x38, 0x38, 0x3, 0x83, 0x80, 0x38,
    0x38, 0x3, 0xcf, 0x80, 0x1f, 0xf0, 0x0, 0xfe,
    0x0, 0x1f, 0x80, 0x3, 0xfc, 0x0, 0x7b, 0xe0,
    0x7, 0x1e, 0xc, 0xf0, 0xf1, 0xee, 0x7, 0x9c,
    0xe0, 0x7f, 0xce, 0x3, 0xf8, 0xe0, 0x1f, 0x7,
    0x1, 0xf0, 0x78, 0x7f, 0x83, 0xff, 0xfc, 0x1f,
    0xf1, 0xe0, 0xfc, 0xe,

    /* U+0027 "'" */
    0xff, 0xff, 0xc0,

    /* U+0028 "(" */
    0xc, 0x21, 0x8e, 0x30, 0xc7, 0x1c, 0x63, 0x8e,
    0x38, 0xe3, 0x8e, 0x38, 0xe3, 0x86, 0x1c, 0x70,
    0xc3, 0xe, 0x18, 0x20, 0xc0,

    /* U+0029 ")" */
    0xc1, 0x6, 0x1c, 0x30, 0xc3, 0x8e, 0x18, 0x71,
    0xc7, 0x1c, 0x71, 0xc7, 0x1c, 0x71, 0x8e, 0x38,
    0xc3, 0x1c, 0x61, 0xc, 0x0,

    /* U+002A "*" */
    0xc, 0x3, 0x6, 0xd9, 0xfe, 0x3f, 0xf, 0xc7,
    0xf9, 0xb6, 0xc, 0x3, 0x0,

    /* U+002C "," */
    0xff, 0xfc, 0x0,

    /* U+002E "." */
    0xff, 0x80,

    /* U+0030 "0" */
    0xf, 0x81, 0xff, 0x1f, 0xfc, 0xf1, 0xef, 0x7,
    0xf0, 0x1f, 0x80, 0xfc, 0x7, 0xe0, 0x3f, 0x1,
    0xf8, 0xf, 0xc0, 0x7e, 0x3, 0xf0, 0x1f, 0x80,
    0xfc, 0x7, 0xe0, 0x3f, 0x1, 0xf8, 0xf, 0xe0,
    0xf7, 0x8f, 0x3f, 0xf8, 0xff, 0x81, 0xf0,

    /* U+0031 "1" */
    0x3d, 0xff, 0xff, 0xde, 0x71, 0xc7, 0x1c, 0x71,
    0xc7, 0x1c, 0x71, 0xc7, 0x1c, 0x71, 0xc7, 0x1c,
    0x71, 0xc7,

    /* U+0032 "2" */
    0xf, 0x81, 0xff, 0x1f, 0xf8, 0xf1, 0xef, 0x7,
    0xf8, 0x1f, 0x80, 0xe0, 0x7, 0x0, 0x78, 0x3,
    0xc0, 0x3c, 0x3, 0xc0, 0x3e, 0x1, 0xe0, 0x1e,
    0x1, 0xe0, 0x1f, 0x0, 0xf0, 0xf, 0x0, 0xf8,
    0xf, 0x80, 0x7f, 0xff, 0xff, 0xff, 0xff,

    /* U+0033 "3" */
    0xf, 0x80, 0xff, 0xf, 0xfc, 0xf1, 0xe7, 0x7,
    0xf8, 0x1c, 0x0, 0xe0, 0x7, 0x0, 0x78, 0x7,
    0x81, 0xfc, 0xf, 0xc0, 0x7f, 0x0, 0x78, 0x1,
    0xe0, 0x7, 0x0, 0x38, 0x1, 0xfc, 0xe, 0xe0,
    0xf7, 0x8f, 0x1f, 0xf8, 0xff, 0x81, 0xf0,

    /* U+0034 "4" */
    0x0, 0xe0, 0x3, 0xc0, 0x7, 0x0, 0x1e, 0x0,
    0x3c, 0x0, 0xf0, 0x1, 0xe0, 0x7, 0x80, 0xf,
    0x0, 0x1c, 0x0, 0x78, 0x0, 0xe1, 0xc3, 0xc3,
    0x87, 0x7, 0x1e, 0xe, 0x38, 0x1c, 0xf0, 0x39,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x3, 0x80,
    0x7, 0x0, 0xe, 0x0, 0x1c,

    /* U+0035 "5" */
    0xff, 0xff, 0xff, 0xff, 0xfe, 0x0, 0xe0, 0xe,
    0x0, 0xe0, 0xe, 0x0, 0xef, 0x8f, 0xfc, 0xff,
    0xef, 0xe, 0xe0, 0xf0, 0x7, 0x0, 0x70, 0x7,
    0x0, 0x70, 0x7, 0xe0, 0x7e, 0xf, 0xf0, 0xe7,
    0xfe, 0x3f, 0xc1, 0xf0,

    /* U+0036 "6" */
    0x1, 0xe0, 0x1e, 0x0, 0xf0, 0xf, 0x0, 0x78,
    0x7, 0x80, 0x3c, 0x3, 0xc0, 0x1e, 0x1, 0xe0,
    0xf, 0xf0, 0xff, 0xc7, 0xff, 0x3c, 0x7f, 0xc1,
    0xfc, 0x7, 0xe0, 0x3f, 0x1, 0xf8, 0xf, 0xe0,
    0xf7, 0x8f, 0x3f, 0xf8, 0xff, 0x81, 0xf0,

    /* U+0037 "7" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xfe, 0x7,
    0x70, 0x7b, 0x83, 0xc0, 0x1c, 0x1, 0xe0, 0xf,
    0x0, 0xf0, 0x7, 0x80, 0x38, 0x3, 0xc0, 0x1e,
    0x0, 0xe0, 0xf, 0x0, 0x78, 0x7, 0x80, 0x3c,
    0x1, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x0,

    /* U+0038 "8" */
    0x7, 0x80, 0x7f, 0x83, 0xff, 0xe, 0x1c, 0x70,
    0x39, 0xc0, 0xe7, 0x3, 0x9c, 0xe, 0x70, 0x39,
    0xe1, 0xc3, 0xff, 0x7, 0xf8, 0x7f, 0xf9, 0xe1,
    0xef, 0x3, 0xf8, 0x7, 0xe0, 0x1f, 0x80, 0x7e,
    0x1, 0xfc, 0xf, 0x78, 0x78, 0xff, 0xc1, 0xfe,
    0x3, 0xf0,

    /* U+0039 "9" */
    0xf, 0x81, 0xff, 0x1f, 0xfc, 0xf1, 0xef, 0x7,
    0xf0, 0x1f, 0x80, 0xfc, 0x7, 0xe0, 0x3f, 0x83,
    0xfe, 0x3c, 0xff, 0xe3, 0xff, 0xf, 0xf0, 0x7,
    0x80, 0x78, 0x3, 0xc0, 0x3c, 0x1, 0xe0, 0x1e,
    0x0, 0xf0, 0xf, 0x0, 0x78, 0x7, 0x80,

    /* U+003A ":" */
    0xff, 0x80, 0x0, 0xff, 0x80,

    /* U+003B ";" */
    0xff, 0x80, 0x7, 0xff, 0xe0,

    /* U+003C "<" */
    0x0, 0x1, 0x0, 0x7, 0x0, 0x1f, 0x0, 0xfc,
    0x3, 0xf0, 0xf, 0xc0, 0x3f, 0x0, 0xf8, 0x0,
    0xe0, 0x0, 0xf8, 0x0, 0x7e, 0x0, 0xf, 0x80,
    0x3, 0xf0, 0x0, 0xfc, 0x0, 0x3f, 0x0, 0xf,
    0x0, 0x3,

    /* U+003E ">" */
    0x80, 0x0, 0xe0, 0x0, 0xf8, 0x0, 0x3f, 0x0,
    0xf, 0xc0, 0x3, 0xf0, 0x0, 0xfc, 0x0, 0x1f,
    0x0, 0x7, 0x0, 0x1f, 0x0, 0x7e, 0x1, 0xf0,
    0xf, 0xc0, 0x3f, 0x0, 0xfc, 0x0, 0xf0, 0x0,
    0xc0, 0x0,

    /* U+0040 "@" */
    0x0, 0xff, 0x0, 0x7, 0xff, 0x80, 0x3f, 0xff,
    0x80, 0xfc, 0xf, 0xc3, 0xe0, 0x7, 0x87, 0x8f,
    0x87, 0x9e, 0x7f, 0xb7, 0x39, 0xe3, 0xc7, 0xf3,
    0x83, 0x8f, 0xce, 0x7, 0x1f, 0x9c, 0xe, 0x3f,
    0x70, 0x18, 0x7e, 0xe0, 0x30, 0xfd, 0xc0, 0x63,
    0xbb, 0x81, 0x87, 0x7f, 0x7, 0x1c, 0x77, 0x1e,
    0x70, 0xff, 0xef, 0xc0, 0xf7, 0x8f, 0x71, 0xf0,
    0x1, 0xc1, 0xf8, 0xf, 0x1, 0xff, 0xfc, 0x0,
    0xff, 0xf0, 0x0, 0x7f, 0x0,

    /* U+0041 "A" */
    0x0, 0xe0, 0x0, 0x1e, 0x0, 0x7, 0xc0, 0x0,
    0xf8, 0x0, 0x1f, 0x80, 0x7, 0xf0, 0x0, 0xee,
    0x0, 0x1c, 0xe0, 0x7, 0x9c, 0x0, 0xe3, 0x80,
    0x1c, 0x78, 0x7, 0x87, 0x0, 0xf0, 0xf0, 0x1c,
    0x1e, 0x7, 0x81, 0xc0, 0xf0, 0x3c, 0x1f, 0xff,
    0x87, 0xff, 0xf0, 0xff, 0xff, 0x1c, 0x1, 0xe7,
    0x80, 0x1c, 0xf0, 0x3, 0xdc, 0x0, 0x7f, 0x80,
    0x7,

    /* U+0042 "B" */
    0xff, 0xe0, 0xff, 0xf8, 0xff, 0xfc, 0xe0, 0x3c,
    0xe0, 0x1e, 0xe0, 0xe, 0xe0, 0xe, 0xe0, 0xe,
    0xe0, 0x1e, 0xe0, 0x3c, 0xff, 0xf8, 0xff, 0xf0,
    0xff, 0xfc, 0xe0, 0x1e, 0xe0, 0xf, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0xf,
    0xe0, 0x1e, 0xff, 0xfe, 0xff, 0xfc, 0xff, 0xf0,

    /* U+0043 "C" */
    0x7, 0xe0, 0x1f, 0xf8, 0x3f, 0xfc, 0x7c, 0x3c,
    0x70, 0x1e, 0xf0, 0xe, 0xe0, 0xf, 0xe0, 0x0,
    0xe0, 0x0, 0xe0, 0x0, 0xe0, 0x0, 0xe0, 0x0,
    0xe0, 0x0, 0xe0, 0x0, 0xe0, 0x0, 0xe0, 0x0,
    0xe0, 0x0, 0xe0, 0x0, 0xf0, 0xe, 0x70, 0x1e,
    0x7c, 0x3e, 0x3f, 0xfc, 0x1f, 0xf8, 0x7, 0xe0,

    /* U+0044 "D" */
    0xff, 0xe0, 0xff, 0xf8, 0xff, 0xfc, 0xe0, 0x3c,
    0xe0, 0x1e, 0xe0, 0xe, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0xe, 0xe0, 0x1e,
    0xe0, 0x3c, 0xff, 0xfc, 0xff, 0xf8, 0xff, 0xe0,

    /* U+0045 "E" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0, 0xe,
    0x0, 0x1c, 0x0, 0x38, 0x0, 0x70, 0x0, 0xe0,
    0x1, 0xc0, 0x3, 0x80, 0x7, 0xff, 0xcf, 0xff,
    0x9f, 0xff, 0x38, 0x0, 0x70, 0x0, 0xe0, 0x1,
    0xc0, 0x3, 0x80, 0x7, 0x0, 0xe, 0x0, 0x1f,
    0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+0046 "F" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0, 0xe,
    0x0, 0x1c, 0x0, 0x38, 0x0, 0x70, 0x0, 0xe0,
    0x1, 0xc0, 0x3, 0x80, 0x7, 0xff, 0xcf, 0xff,
    0x9f, 0xff, 0x38, 0x0, 0x70, 0x0, 0xe0, 0x1,
    0xc0, 0x3, 0x80, 0x7, 0x0, 0xe, 0x0, 0x1c,
    0x0, 0x38, 0x0, 0x70, 0x0,

    /* U+0047 "G" */
    0x7, 0xe0, 0x1f, 0xf8, 0x3f, 0xfc, 0x7c, 0x3e,
    0x78, 0x1e, 0xf0, 0xf, 0xe0, 0x7, 0xe0, 0x0,
    0xe0, 0x0, 0xe0, 0x0, 0xe0, 0x0, 0xe0, 0xff,
    0xe0, 0xff, 0xe0, 0xff, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0x7, 0xf0, 0xf, 0x78, 0x1e,
    0x7c, 0x3e, 0x3f, 0xfc, 0x1f, 0xf8, 0x7, 0xe0,

    /* U+0048 "H" */
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7,

    /* U+0049 "I" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff,

    /* U+004A "J" */
    0x0, 0x38, 0x1, 0xc0, 0xe, 0x0, 0x70, 0x3,
    0x80, 0x1c, 0x0, 0xe0, 0x7, 0x0, 0x38, 0x1,
    0xc0, 0xe, 0x0, 0x70, 0x3, 0x80, 0x1c, 0x0,
    0xe0, 0x7, 0x0, 0x38, 0x1, 0xc0, 0xe, 0x0,
    0xe7, 0xf, 0x7f, 0xf1, 0xff, 0x3, 0xf0,

    /* U+004B "K" */
    0xe0, 0xf, 0x70, 0xf, 0x38, 0x7, 0x9c, 0x7,
    0x8e, 0x7, 0x87, 0x7, 0x83, 0x87, 0xc1, 0xc3,
    0xc0, 0xe3, 0xc0, 0x73, 0xc0, 0x3b, 0xf0, 0x1d,
    0xf8, 0xf, 0xfe, 0x7, 0xe7, 0x3, 0xe3, 0xc1,
    0xe0, 0xf0, 0xe0, 0x78, 0x70, 0x1e, 0x38, 0xf,
    0x1c, 0x3, 0xce, 0x1, 0xe7, 0x0, 0x7b, 0x80,
    0x3d, 0xc0, 0xf,

    /* U+004C "L" */
    0xe0, 0x1, 0xc0, 0x3, 0x80, 0x7, 0x0, 0xe,
    0x0, 0x1c, 0x0, 0x38, 0x0, 0x70, 0x0, 0xe0,
    0x1, 0xc0, 0x3, 0x80, 0x7, 0x0, 0xe, 0x0,
    0x1c, 0x0, 0x38, 0x0, 0x70, 0x0, 0xe0, 0x1,
    0xc0, 0x3, 0x80, 0x7, 0x0, 0xe, 0x0, 0x1f,
    0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+004D "M" */
    0xe0, 0x0, 0xfc, 0x0, 0x1f, 0xc0, 0x7, 0xf8,
    0x0, 0xff, 0x80, 0x3f, 0xf0, 0x7, 0xff, 0x1,
    0xff, 0xe0, 0x3f, 0xfc, 0x7, 0xff, 0xc1, 0xff,
    0xb8, 0x3b, 0xf7, 0x8f, 0x7e, 0xf1, 0xcf, 0xcf,
    0x79, 0xf9, 0xef, 0x3f, 0x1d, 0xc7, 0xe3, 0xf8,
    0xfc, 0x3e, 0x1f, 0x87, 0xc3, 0xf0, 0x70, 0x7e,
    0xe, 0xf, 0xc0, 0x1, 0xf8, 0x0, 0x3f, 0x0,
    0x7,

    /* U+004E "N" */
    0xe0, 0x3, 0xf8, 0x1, 0xfc, 0x0, 0xff, 0x0,
    0x7f, 0xc0, 0x3f, 0xe0, 0x1f, 0xf8, 0xf, 0xfe,
    0x7, 0xef, 0x3, 0xf3, 0xc1, 0xf9, 0xf0, 0xfc,
    0x78, 0x7e, 0x1e, 0x3f, 0xf, 0x9f, 0x83, 0xcf,
    0xc0, 0xf7, 0xe0, 0x7f, 0xf0, 0x1f, 0xf8, 0x7,
    0xfc, 0x3, 0xfe, 0x0, 0xff, 0x0, 0x3f, 0x80,
    0x1f, 0xc0, 0x7,

    /* U+004F "O" */
    0x7, 0xe0, 0x1f, 0xf8, 0x3f, 0xfc, 0x7c, 0x3e,
    0x78, 0x1e, 0xf0, 0xf, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0x7, 0xf0, 0xf, 0x78, 0x1e,
    0x7c, 0x3e, 0x3f, 0xfc, 0x1f, 0xf8, 0x7, 0xe0,

    /* U+0050 "P" */
    0xff, 0xe0, 0xff, 0xf8, 0xff, 0xfc, 0xe0, 0x1e,
    0xe0, 0xe, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0xe, 0xe0, 0x1e,
    0xff, 0xfc, 0xff, 0xf8, 0xff, 0xe0, 0xe0, 0x0,
    0xe0, 0x0, 0xe0, 0x0, 0xe0, 0x0, 0xe0, 0x0,
    0xe0, 0x0, 0xe0, 0x0, 0xe0, 0x0, 0xe0, 0x0,

    /* U+0051 "Q" */
    0x7, 0xe0, 0x7, 0xfe, 0x3, 0xff, 0xc1, 0xf0,
    0xf8, 0x78, 0x1e, 0x3c, 0x3, 0x8e, 0x0, 0x73,
    0x80, 0x1c, 0xe0, 0x7, 0x38, 0x1, 0xce, 0x0,
    0x73, 0x80, 0x1c, 0xe0, 0x7, 0x38, 0x1, 0xce,
    0x0, 0x73, 0x81, 0x9c, 0xe0, 0xf7, 0x38, 0x3f,
    0xcf, 0x7, 0xf1, 0xe0, 0xf8, 0x7c, 0x3f, 0xf,
    0xff, 0xe1, 0xff, 0xbc, 0x1f, 0x86, 0x0, 0x0,
    0x0,

    /* U+0052 "R" */
    0xff, 0xf0, 0x7f, 0xfe, 0x3f, 0xff, 0x9c, 0x3,
    0xce, 0x0, 0xf7, 0x0, 0x3b, 0x80, 0x1d, 0xc0,
    0xe, 0xe0, 0x7, 0x70, 0x7, 0xb8, 0x7, 0x9f,
    0xff, 0xcf, 0xff, 0xc7, 0xff, 0x83, 0x83, 0xc1,
    0xc0, 0xf0, 0xe0, 0x78, 0x70, 0x1e, 0x38, 0xf,
    0x1c, 0x3, 0xce, 0x1, 0xe7, 0x0, 0x7b, 0x80,
    0x3d, 0xc0, 0xf,

    /* U+0053 "S" */
    0x7, 0xf0, 0x1f, 0xfc, 0x3f, 0xfe, 0x3c, 0x1e,
    0x78, 0x4, 0x70, 0x0, 0x70, 0x0, 0x70, 0x0,
    0x78, 0x0, 0x7e, 0x0, 0x3f, 0xf0, 0x3f, 0xfc,
    0x1f, 0xfe, 0x7, 0xfe, 0x0, 0x1f, 0x0, 0xf,
    0x0, 0x7, 0x0, 0x7, 0x0, 0x7, 0x60, 0xf,
    0xf8, 0x1e, 0xff, 0xfe, 0x3f, 0xf8, 0xf, 0xf0,

    /* U+0054 "T" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3, 0x80,
    0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 0x80,
    0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 0x80,
    0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 0x80,
    0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 0x80,
    0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 0x80,

    /* U+0055 "U" */
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0x7, 0xf0, 0xf, 0x70, 0xe,
    0x7c, 0x3e, 0x3f, 0xfc, 0x1f, 0xf8, 0x7, 0xe0,

    /* U+0056 "V" */
    0xf0, 0x3, 0xfc, 0x0, 0xe7, 0x0, 0x79, 0xe0,
    0x1e, 0x78, 0x7, 0xe, 0x1, 0xc3, 0xc0, 0xf0,
    0xf0, 0x38, 0x1c, 0xe, 0x7, 0x7, 0x81, 0xe1,
    0xc0, 0x38, 0x70, 0xe, 0x1c, 0x3, 0xcf, 0x0,
    0x73, 0x80, 0x1c, 0xe0, 0x7, 0x78, 0x0, 0xfc,
    0x0, 0x3f, 0x0, 0xf, 0xc0, 0x3, 0xe0, 0x0,
    0x78, 0x0, 0x1e, 0x0, 0x7, 0x0,

    /* U+0057 "W" */
    0xf0, 0xe, 0x1, 0xdc, 0x3, 0x80, 0xf7, 0x81,
    0xe0, 0x3d, 0xe0, 0x78, 0xe, 0x78, 0x1f, 0x3,
    0x8e, 0x7, 0xc1, 0xe3, 0x83, 0xf0, 0x78, 0xf0,
    0xec, 0x1c, 0x3c, 0x3b, 0x87, 0x7, 0xe, 0xe1,
    0xc1, 0xc7, 0x38, 0xf0, 0x71, 0xc7, 0x3c, 0x1e,
    0x71, 0xce, 0x3, 0x9c, 0x73, 0x80, 0xee, 0x1c,
    0xe0, 0x3b, 0x83, 0xf8, 0xe, 0xe0, 0xfc, 0x3,
    0xf8, 0x3f, 0x0, 0x7c, 0xf, 0xc0, 0x1f, 0x1,
    0xf0, 0x7, 0xc0, 0x78, 0x1, 0xf0, 0x1e, 0x0,
    0x38, 0x7, 0x80, 0xe, 0x0, 0xe0,

    /* U+0058 "X" */
    0xf0, 0x7, 0xbc, 0x7, 0x8e, 0x3, 0xc7, 0x83,
    0xc1, 0xc1, 0xe0, 0xf1, 0xe0, 0x3c, 0xe0, 0x1e,
    0xf0, 0x7, 0xf0, 0x3, 0xf8, 0x0, 0xf8, 0x0,
    0x3c, 0x0, 0x3e, 0x0, 0x1f, 0x80, 0x1f, 0xc0,
    0x1e, 0xf0, 0xf, 0x78, 0xf, 0x1e, 0x7, 0x8f,
    0x7, 0x83, 0xc3, 0xc0, 0xe3, 0xc0, 0x79, 0xc0,
    0x1f, 0xe0, 0xf,

    /* U+0059 "Y" */
    0xf0, 0x7, 0xb8, 0x3, 0x9e, 0x3, 0xc7, 0x1,
    0xc3, 0xc1, 0xe0, 0xe0, 0xe0, 0x78, 0xf0, 0x1c,
    0x70, 0xf, 0x78, 0x3, 0xb8, 0x1, 0xdc, 0x0,
    0x7c, 0x0, 0x3e, 0x0, 0xe, 0x0, 0x7, 0x0,
    0x3, 0x80, 0x1, 0xc0, 0x0, 0xe0, 0x0, 0x70,
    0x0, 0x38, 0x0, 0x1c, 0x0, 0xe, 0x0, 0x7,
    0x0, 0x3, 0x80,

    /* U+005A "Z" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xe, 0x0,
    0x78, 0x3, 0xc0, 0xf, 0x0, 0x78, 0x1, 0xe0,
    0xf, 0x0, 0x3c, 0x1, 0xe0, 0x7, 0x0, 0x3c,
    0x0, 0xe0, 0x7, 0x80, 0x1c, 0x0, 0xf0, 0x3,
    0x80, 0x1e, 0x0, 0xf0, 0x3, 0xff, 0xff, 0xff,
    0xff, 0xff,

    /* U+005B "[" */
    0xff, 0xfe, 0x38, 0xe3, 0x8e, 0x38, 0xe3, 0x8e,
    0x38, 0xe3, 0x8e, 0x38, 0xe3, 0x8e, 0x38, 0xe3,
    0x8e, 0x38, 0xe3, 0xff, 0xc0,

    /* U+005D "]" */
    0xff, 0xf1, 0xc7, 0x1c, 0x71, 0xc7, 0x1c, 0x71,
    0xc7, 0x1c, 0x71, 0xc7, 0x1c, 0x71, 0xc7, 0x1c,
    0x71, 0xc7, 0x1f, 0xff, 0xc0,

    /* U+005E "^" */
    0x3, 0x80, 0x3, 0x80, 0x7, 0xc0, 0x6, 0xc0,
    0xe, 0xe0, 0xc, 0x60, 0x1c, 0x70, 0x18, 0x30,
    0x38, 0x38, 0x30, 0x18, 0x70, 0x1c, 0x60, 0xc,
    0xe0, 0xe, 0xe0, 0x6,

    /* U+007B "{" */
    0xf, 0x87, 0xc7, 0x83, 0x81, 0xc0, 0xe0, 0x70,
    0x38, 0x1c, 0xe, 0x7, 0x7, 0xf, 0x7, 0x80,
    0xe0, 0x78, 0x1c, 0xe, 0x7, 0x3, 0x81, 0xc0,
    0xe0, 0x70, 0x38, 0x1e, 0x7, 0xc1, 0xe0,

    /* U+007D "}" */
    0xf8, 0x7c, 0xf, 0x3, 0x81, 0xc0, 0xe0, 0x70,
    0x38, 0x1c, 0xe, 0x7, 0x1, 0xc0, 0x78, 0x3c,
    0x38, 0x38, 0x1c, 0xe, 0x7, 0x3, 0x81, 0xc0,
    0xe0, 0x70, 0x38, 0x3c, 0x7c, 0x3c, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 123, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 132, .box_w = 3, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 10, .adv_w = 170, .box_w = 7, .box_h = 6, .ofs_x = 2, .ofs_y = 18},
    {.bitmap_index = 16, .adv_w = 246, .box_w = 15, .box_h = 24, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 61, .adv_w = 246, .box_w = 14, .box_h = 30, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 114, .adv_w = 266, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 153, .adv_w = 332, .box_w = 20, .box_h = 24, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 213, .adv_w = 123, .box_w = 3, .box_h = 6, .ofs_x = 3, .ofs_y = 18},
    {.bitmap_index = 216, .adv_w = 142, .box_w = 6, .box_h = 27, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 237, .adv_w = 142, .box_w = 6, .box_h = 27, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 258, .adv_w = 180, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 14},
    {.bitmap_index = 271, .adv_w = 123, .box_w = 3, .box_h = 6, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 274, .adv_w = 123, .box_w = 3, .box_h = 3, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 276, .adv_w = 246, .box_w = 13, .box_h = 24, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 315, .adv_w = 246, .box_w = 6, .box_h = 24, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 333, .adv_w = 246, .box_w = 13, .box_h = 24, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 372, .adv_w = 246, .box_w = 13, .box_h = 24, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 411, .adv_w = 246, .box_w = 15, .box_h = 24, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 456, .adv_w = 246, .box_w = 12, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 492, .adv_w = 246, .box_w = 13, .box_h = 24, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 531, .adv_w = 246, .box_w = 13, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 570, .adv_w = 246, .box_w = 14, .box_h = 24, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 612, .adv_w = 246, .box_w = 13, .box_h = 24, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 651, .adv_w = 123, .box_w = 3, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 656, .adv_w = 123, .box_w = 3, .box_h = 13, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 661, .adv_w = 307, .box_w = 16, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 695, .adv_w = 307, .box_w = 16, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 729, .adv_w = 410, .box_w = 23, .box_h = 24, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 798, .adv_w = 312, .box_w = 19, .box_h = 24, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 855, .adv_w = 312, .box_w = 16, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 903, .adv_w = 285, .box_w = 16, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 951, .adv_w = 323, .box_w = 16, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 999, .adv_w = 285, .box_w = 15, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1044, .adv_w = 275, .box_w = 15, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1089, .adv_w = 312, .box_w = 16, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1137, .adv_w = 332, .box_w = 16, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1185, .adv_w = 132, .box_w = 3, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1194, .adv_w = 246, .box_w = 13, .box_h = 24, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1233, .adv_w = 323, .box_w = 17, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1284, .adv_w = 285, .box_w = 15, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1329, .adv_w = 388, .box_w = 19, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1386, .adv_w = 350, .box_w = 17, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1437, .adv_w = 312, .box_w = 16, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1485, .adv_w = 304, .box_w = 16, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1533, .adv_w = 312, .box_w = 18, .box_h = 25, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 1590, .adv_w = 312, .box_w = 17, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1641, .adv_w = 294, .box_w = 16, .box_h = 24, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1689, .adv_w = 256, .box_w = 16, .box_h = 24, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1737, .adv_w = 323, .box_w = 16, .box_h = 24, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1785, .adv_w = 285, .box_w = 18, .box_h = 24, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1839, .adv_w = 426, .box_w = 26, .box_h = 24, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1917, .adv_w = 274, .box_w = 17, .box_h = 24, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1968, .adv_w = 256, .box_w = 17, .box_h = 24, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 2019, .adv_w = 266, .box_w = 14, .box_h = 24, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2061, .adv_w = 142, .box_w = 6, .box_h = 27, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 2082, .adv_w = 142, .box_w = 6, .box_h = 27, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2103, .adv_w = 307, .box_w = 16, .box_h = 14, .ofs_x = 2, .ofs_y = 9},
    {.bitmap_index = 2131, .adv_w = 142, .box_w = 9, .box_h = 27, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2162, .adv_w = 142, .box_w = 9, .box_h = 27, .ofs_x = 1, .ofs_y = -3}
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
    -9, -9, -9, -9, -38, -9, -28, -19,
    -38, -9, -6, -12, -66, -66, -28, -9,
    -9, -12, -57, -57, -38, -66, -13, -13,
    -9, -9, -13, -9, -6, -15, -66, -66,
    -38, -3, -9, -9, -9, -15, -51, -57,
    -51, -51, -38, -9, -13, -13, -13, -66,
    -66, -38, -38, -28, -9, -9, -38, -38,
    -9, -9, -19, -57, -57, -47, -47, -38,
    -13
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
const lv_font_t signalis_32px = {
#else
lv_font_t signalis_32px = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 30,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 2,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if SIGNALIS_32PX*/

