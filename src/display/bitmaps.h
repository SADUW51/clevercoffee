/**
 * @file bitmaps.h
 *
 * @brief Bitmaps for icons and logos
 *
 */

#pragma once

#define CleverCoffee_Logo_width 40
#define CleverCoffee_Logo_height 40
#define Rancilio_Silvia_Logo_width 52
#define Rancilio_Silvia_Logo_height 49
#define Gaggia_Classic_Logo_width 46
#define Gaggia_Classic_Logo_height 49
#define Heating_Logo_width 40
#define Heating_Logo_height 40
#define Off_Logo_width 52
#define Off_Logo_height 53
#define Steam_Logo_width 40
#define Steam_Logo_height 40
#define Brew_Cup_Logo_width 40
#define Brew_Cup_Logo_height 40
#define Water_Empty_Logo_width 47
#define Water_Empty_Logo_height 64
#define Manual_Flush_Logo_width 40
#define Manual_Flush_Logo_height 40

// clang-format off

static const unsigned char Antenna_OK_Icon[] U8X8_PROGMEM = {
    B00011111,
    B00010101,
    B00010101,
    B00001110,
    B00000100,
    B00000100,
    B00000100,
    B00000100
};

static const unsigned char Antenna_NOK_Icon[] U8X8_PROGMEM = {
    B00111101,
    B00100010,
    B00100100,
    B00001000,
    B00010000,
    B00101000,
    B01001000,
    B10001000
};

static const unsigned char Water_Empty_Icon[] U8X8_PROGMEM = {
    B00001001,
    B01001010,
    B00011100,
    B00010100,
    B00101110,
    B00111110,
    B01011100,
    B10000000
};

static const unsigned char CleverCoffee_Logo[] U8X8_PROGMEM = {
    0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x60, 0x06, 0x00, 0x00, 0x00,
    0xc0, 0x0c, 0x00, 0x00, 0x00, 0xc0, 0x19, 0x00, 0x00, 0x00, 0x80, 0x19,
    0x00, 0x00, 0x00, 0x80, 0x1b, 0x00, 0x00, 0x00, 0xa0, 0x5b, 0x00, 0x00,
    0x00, 0xb8, 0xdb, 0x01, 0x00, 0x00, 0xbc, 0xd9, 0x03, 0x00, 0x00, 0xbf,
    0xd9, 0x0f, 0x00, 0x80, 0xbf, 0xcd, 0x1f, 0x00, 0xc0, 0xcf, 0x0d, 0x3f,
    0x00, 0xe0, 0xc3, 0x6c, 0x7c, 0x00, 0xf0, 0xe9, 0xc6, 0xf9, 0x00, 0xf0,
    0xec, 0x06, 0xf3, 0x00, 0x78, 0x66, 0x06, 0xe6, 0x00, 0x7c, 0x63, 0x06,
    0xec, 0x00, 0x3c, 0x61, 0x06, 0x00, 0x00, 0xbc, 0x61, 0x0c, 0x00, 0x00,
    0x9e, 0x60, 0x08, 0x00, 0x00, 0xde, 0x60, 0x00, 0x00, 0xfe, 0x5f, 0x40,
    0x00, 0x00, 0xff, 0x5f, 0xc0, 0x00, 0x00, 0xff, 0x5f, 0x80, 0x00, 0x00,
    0xfe, 0x5f, 0x00, 0x00, 0x00, 0x00, 0xde, 0x00, 0x00, 0x00, 0x00, 0x9e,
    0x00, 0x00, 0x00, 0x00, 0xbc, 0x01, 0x00, 0x00, 0x00, 0x3c, 0x01, 0x00,
    0x00, 0x00, 0x7c, 0x03, 0x00, 0xf6, 0x00, 0x78, 0x06, 0x00, 0xf3, 0x00,
    0xf0, 0x0c, 0xc0, 0x79, 0x00, 0xf0, 0x79, 0xf0, 0x7c, 0x00, 0xe0, 0xe3,
    0x3f, 0x3e, 0x00, 0xc0, 0x0f, 0x87, 0x1f, 0x00, 0x80, 0x3f, 0xe0, 0x0f,
    0x00, 0x00, 0xfe, 0xf8, 0x03, 0x00, 0x00, 0xfc, 0xff, 0x01, 0x00, 0x00,
    0xf0, 0x7f, 0x00, 0x00, 0x00, 0xc0, 0x1f, 0x00}
;

static const unsigned char Heating_Logo[] U8X8_PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x01, 0x30, 0x00,
    0x03, 0x80, 0x03, 0x38, 0x00, 0x07, 0xc0, 0x03, 0x78, 0x80, 0x07, 0xe0,
    0x07, 0x7c, 0xc0, 0x0f, 0xe0, 0x0f, 0xfe, 0xc0, 0x1f, 0xf0, 0x0f, 0xfe,
    0xe1, 0x1f, 0xf0, 0x03, 0x3c, 0x80, 0x03, 0xc0, 0x01, 0x3c, 0x80, 0x03,
    0xc0, 0x01, 0x3c, 0x80, 0x03, 0xc0, 0x01, 0x3c, 0x80, 0x03, 0xe0, 0x01,
    0x1c, 0xc0, 0x03, 0xe0, 0x01, 0x1c, 0xc0, 0x03, 0xf0, 0x00, 0x1e, 0xe0,
    0x01, 0xf0, 0x00, 0x0f, 0xe0, 0x01, 0x70, 0x00, 0x0f, 0xe0, 0x00, 0x70,
    0x00, 0x07, 0xe0, 0x00, 0x78, 0x00, 0x07, 0xf0, 0x00, 0x78, 0x00, 0x07,
    0xf0, 0x00, 0x70, 0x00, 0x07, 0xe0, 0x00, 0x70, 0x00, 0x0f, 0xe0, 0x00,
    0x70, 0x00, 0x0e, 0xe0, 0x01, 0xe0, 0x00, 0x1e, 0xc0, 0x01, 0xe0, 0x00,
    0x1c, 0xc0, 0x03, 0xe0, 0x01, 0x1c, 0xc0, 0x03, 0xc0, 0x01, 0x1c, 0x80,
    0x03, 0xc0, 0x01, 0x1c, 0x80, 0x03, 0xc0, 0x01, 0x3c, 0x80, 0x03, 0xc0,
    0x01, 0x3c, 0x80, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char Off_Logo[] U8X8_PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x1f, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xc0, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0,
    0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x3f, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xc0, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x3f, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xc0, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x3f,
    0x00, 0x00, 0x00, 0x00, 0x1c, 0xc0, 0x3f, 0x80, 0x03, 0x00, 0x00, 0x3e,
    0xc0, 0x3f, 0xc0, 0x07, 0x00, 0x00, 0x7f, 0xc0, 0x3f, 0xe0, 0x0f, 0x00,
    0x80, 0x7f, 0xc0, 0x3f, 0xe0, 0x1f, 0x00, 0xc0, 0x7f, 0xc0, 0x3f, 0xe0,
    0x3f, 0x00, 0xc0, 0x7f, 0xc0, 0x3f, 0xe0, 0x3f, 0x00, 0xe0, 0x3f, 0xc0,
    0x3f, 0xc0, 0x7f, 0x00, 0xf0, 0x1f, 0xc0, 0x3f, 0x80, 0xff, 0x00, 0xf0,
    0x0f, 0xc0, 0x3f, 0x00, 0xff, 0x00, 0xf8, 0x07, 0xc0, 0x3f, 0x00, 0xfe,
    0x01, 0xf8, 0x07, 0xc0, 0x3f, 0x00, 0xfe, 0x01, 0xfc, 0x03, 0xc0, 0x3f,
    0x00, 0xfc, 0x03, 0xfc, 0x03, 0xc0, 0x3f, 0x00, 0xfc, 0x03, 0xfc, 0x01,
    0xc0, 0x3f, 0x00, 0xf8, 0x03, 0xfc, 0x01, 0xc0, 0x3f, 0x00, 0xf8, 0x03,
    0xfc, 0x01, 0xc0, 0x3f, 0x00, 0xf8, 0x03, 0xfe, 0x00, 0xc0, 0x3f, 0x00,
    0xf0, 0x07, 0xfe, 0x00, 0xc0, 0x3f, 0x00, 0xf0, 0x07, 0xfe, 0x00, 0xc0,
    0x3f, 0x00, 0xf0, 0x07, 0xfe, 0x00, 0xc0, 0x3f, 0x00, 0xf0, 0x07, 0xfe,
    0x00, 0xc0, 0x3f, 0x00, 0xf0, 0x07, 0xfe, 0x00, 0xc0, 0x3f, 0x00, 0xf0,
    0x07, 0xfc, 0x01, 0xc0, 0x3f, 0x00, 0xf8, 0x03, 0xfc, 0x01, 0xc0, 0x3f,
    0x00, 0xf8, 0x03, 0xfc, 0x01, 0xc0, 0x3f, 0x00, 0xf8, 0x03, 0xfc, 0x03,
    0xc0, 0x3f, 0x00, 0xfc, 0x03, 0xfc, 0x03, 0x80, 0x1f, 0x00, 0xfc, 0x03,
    0xf8, 0x07, 0x00, 0x00, 0x00, 0xfe, 0x01, 0xf8, 0x07, 0x00, 0x00, 0x00,
    0xfe, 0x01, 0xf0, 0x0f, 0x00, 0x00, 0x00, 0xff, 0x00, 0xf0, 0x1f, 0x00,
    0x00, 0x80, 0xff, 0x00, 0xe0, 0x3f, 0x00, 0x00, 0xc0, 0x7f, 0x00, 0xc0,
    0x7f, 0x00, 0x00, 0xe0, 0x3f, 0x00, 0xc0, 0xff, 0x01, 0x00, 0xf8, 0x3f,
    0x00, 0x80, 0xff, 0x03, 0x00, 0xfc, 0x1f, 0x00, 0x00, 0xff, 0x0f, 0x00,
    0xff, 0x0f, 0x00, 0x00, 0xfe, 0x7f, 0xe0, 0xff, 0x07, 0x00, 0x00, 0xfc,
    0xff, 0xff, 0xff, 0x03, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xff, 0x01, 0x00,
    0x00, 0xe0, 0xff, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0x1f,
    0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0xe0,
    0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};


static const unsigned char Steam_Logo[] U8X8_PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x07, 0x00, 0x00, 0xf0, 0x00, 0x0f,
    0x00, 0x00, 0x70, 0x00, 0x0f, 0x00, 0x00, 0x78, 0x00, 0x0f, 0x00, 0x00,
    0x78, 0x00, 0x0f, 0x00, 0x00, 0x78, 0x00, 0x0f, 0x00, 0x00, 0x78, 0x00,
    0x0f, 0x00, 0x00, 0x78, 0x1c, 0x0e, 0x00, 0x00, 0x78, 0x3c, 0x1e, 0x00,
    0x00, 0x38, 0x3c, 0x1e, 0x00, 0x00, 0x3c, 0x3c, 0x1e, 0x00, 0x40, 0x3c,
    0x3c, 0x1e, 0x03, 0x70, 0x3c, 0x3c, 0x1e, 0x07, 0x78, 0x3c, 0x3c, 0x1e,
    0x0f, 0x7c, 0x3c, 0x3c, 0x3c, 0x1f, 0x3c, 0x1c, 0x3c, 0x3c, 0x3e, 0x3e,
    0x00, 0x3c, 0x00, 0x3c, 0x1e, 0x00, 0x3c, 0x00, 0x3c, 0x1e, 0x00, 0x3c,
    0x00, 0x78, 0x0e, 0x00, 0x3c, 0x00, 0x78, 0x0e, 0x00, 0x3c, 0x00, 0x78,
    0x1e, 0x00, 0x1c, 0x00, 0x78, 0x1e, 0x00, 0x00, 0x00, 0x3c, 0x3e, 0x00,
    0x00, 0x00, 0x3c, 0x7c, 0x00, 0x00, 0x00, 0x3e, 0xfc, 0x01, 0x00, 0xc0,
    0x1f, 0xf8, 0x0f, 0x00, 0xf8, 0x0f, 0xf0, 0x1f, 0x00, 0xfc, 0x07, 0xc0,
    0x3f, 0x00, 0xfc, 0x01, 0x00, 0x3e, 0x00, 0x3e, 0x00, 0x00, 0xfc, 0x80,
    0x1f, 0x00, 0x00, 0xf8, 0xff, 0x0f, 0x00, 0x00, 0xf0, 0xff, 0x07, 0x00,
    0x00, 0xe0, 0xff, 0x03, 0x00, 0x00, 0x80, 0xff, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char Brew_Cup_Logo[] U8X8_PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00,
    0x00, 0x00, 0x00, 0x43, 0x00, 0x00, 0x00, 0x08, 0xc3, 0x00, 0x00, 0x00,
    0x0c, 0x87, 0x00, 0x00, 0x00, 0x08, 0x0e, 0x01, 0x00, 0x00, 0x18, 0x1c,
    0x02, 0x00, 0x00, 0x30, 0x18, 0x02, 0x00, 0x00, 0x60, 0x18, 0x02, 0x00,
    0x00, 0x40, 0x10, 0x02, 0x00, 0x00, 0x40, 0x08, 0x00, 0x00, 0x00, 0x00,
    0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0xff, 0xff, 0x00, 0x60,
    0xf0, 0xff, 0xff, 0x01, 0x60, 0xf0, 0xff, 0xff, 0x0f, 0x60, 0xf8, 0xff,
    0xff, 0x19, 0x60, 0xf8, 0xff, 0xff, 0x31, 0xe0, 0xf8, 0xff, 0xff, 0x21,
    0xc0, 0xf8, 0xff, 0xff, 0x60, 0xc0, 0xf8, 0xff, 0xff, 0x60, 0xc0, 0xf0,
    0xff, 0xff, 0x20, 0xc0, 0xf0, 0xff, 0x7f, 0x30, 0x80, 0xf1, 0xff, 0x7f,
    0x18, 0x80, 0xe1, 0xff, 0xff, 0x0f, 0x00, 0xe3, 0xff, 0xff, 0x01, 0x00,
    0xe3, 0xff, 0x1f, 0x00, 0x00, 0xc6, 0xff, 0x0f, 0x00, 0x00, 0xcc, 0xff,
    0x0f, 0x00, 0x00, 0xd8, 0xff, 0x07, 0x00, 0x00, 0xf0, 0xff, 0x03, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff,
    0xff, 0xff, 0x07, 0xf8, 0xff, 0xff, 0xff, 0x03
};

static const unsigned char Water_Empty_Logo[] U8X8_PROGMEM = {
    0x00,0x00,0xfc,0x07,0x00,0x00,0x00,0x80,0xff,0x3f,0x00,0x00,0x00,0xe0,
    0x07,0xfc,0x00,0x00,0x00,0xf0,0x00,0xe0,0x01,0x00,0x00,0x3c,0xf0,0x81,
    0x03,0x00,0x00,0x1e,0xfe,0x0f,0x07,0x00,0x00,0x87,0x1f,0x3f,0x0e,0x00,
    0x00,0xc3,0x01,0x78,0x1c,0x00,0x80,0xf3,0x00,0xe0,0x38,0x00,0xc0,0x31,
    0x00,0xc0,0x31,0x00,0xc0,0x18,0x00,0x80,0x73,0x00,0xe0,0x1c,0x00,0x00,
    0x67,0x00,0x60,0x0c,0x00,0x00,0xe6,0x00,0x60,0x0e,0x00,0x00,0xc6,0x00,
    0x60,0x06,0x00,0x00,0xcc,0x00,0x70,0x06,0x00,0x00,0xcc,0x00,0x30,0x06,
    0x00,0x00,0xcc,0x00,0xfc,0x0f,0x00,0x00,0xcc,0x00,0xfc,0x1f,0x00,0x00,
    0xcc,0x00,0x0c,0x18,0x00,0x00,0xcc,0x00,0x0c,0x18,0x00,0x00,0xcc,0x00,
    0x0c,0x18,0x00,0x00,0xcc,0x00,0x0c,0x18,0x00,0x00,0xcc,0x01,0x0e,0x18,
    0x00,0x00,0xcc,0x01,0x06,0x38,0x00,0x00,0xcc,0x01,0x0e,0x38,0x00,0x00,
    0xcc,0x01,0xfe,0x3f,0x00,0x00,0xcc,0x01,0xfc,0x1f,0x00,0x00,0xcc,0x01,
    0x00,0x00,0x00,0x00,0xcc,0x01,0x00,0x00,0x00,0x00,0xcc,0x01,0x00,0x00,
    0x80,0x03,0xcc,0x01,0x00,0x00,0xc0,0x07,0xcc,0x01,0x00,0x00,0xe0,0x0f,
    0xcc,0x01,0x80,0x00,0x60,0x1c,0xcc,0x01,0xc0,0x01,0x70,0x38,0xfe,0x01,
    0xe0,0x03,0xe0,0x70,0xfe,0x03,0x70,0x03,0xc0,0xe1,0x86,0x03,0x30,0x06,
    0x80,0xe3,0x06,0x03,0x38,0x0e,0x00,0x77,0x06,0x03,0x1c,0x0c,0x00,0x7e,
    0x06,0x03,0x0c,0x1c,0x00,0xfc,0x86,0x03,0x4e,0x18,0x00,0xc0,0x87,0x03,
    0xc6,0x30,0x00,0x80,0xff,0x03,0x47,0x30,0x00,0x00,0xff,0x03,0x03,0x70,
    0x00,0x00,0x86,0x03,0x03,0x60,0x00,0x00,0x07,0x03,0x73,0x60,0x00,0x00,
    0x03,0x07,0x63,0x70,0x00,0x00,0x03,0x07,0x47,0x30,0x00,0x00,0x07,0x03,
    0x0e,0x38,0x00,0x00,0x8e,0x03,0x1c,0x1c,0x00,0x00,0xfe,0x03,0xf8,0x0f,
    0x00,0x00,0xfe,0x03,0xf0,0x07,0x00,0x00,0x86,0x03,0x00,0x00,0x00,0x00,
    0x86,0x03,0x00,0x00,0x00,0x00,0x06,0x03,0x00,0x00,0x00,0x00,0x06,0x03,
    0x00,0x00,0x00,0x00,0x06,0x03,0x00,0x00,0x00,0x00,0x8e,0x03,0x00,0x00,
    0x00,0xf0,0xff,0x7f,0x00,0x00,0x00,0xf0,0xff,0x7f,0x00,0x00,0x00,0x30,
    0x00,0x60,0x00,0x00,0x00,0x30,0x00,0x60,0x00,0x00,0x00,0xf0,0xff,0x7f,
    0x00,0x00,0x00,0xf0,0xff,0x7f
};

static const unsigned char Manual_Flush_Logo[] U8X8_PROGMEM = {
    0x00,0xff,0xff,0x7f,0x00,0x00,0xff,0xff,0x7f,0x00,0x00,0xff,0xff,0x7f,
    0x00,0x00,0xfe,0xff,0x3f,0x00,0x00,0xfe,0xff,0x3f,0x00,0x00,0xfe,0xff,
    0x3f,0x00,0x00,0xfe,0xff,0x3f,0x00,0x00,0xfe,0xff,0x3f,0x00,0x00,0xfc,
    0xff,0x1f,0x00,0x00,0xfc,0xff,0x1f,0x00,0x00,0xfc,0xff,0x1f,0x00,0x00,
    0xfc,0xff,0x1f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x04,0x00,0x00,0x10,0x00,0x0c,
    0x00,0x00,0x18,0x08,0x18,0x00,0x00,0x1c,0x08,0x38,0x00,0x00,0x1e,0x18,
    0x78,0x00,0x80,0x0f,0x18,0xf0,0x01,0xfc,0x8f,0x18,0xf0,0x3f,0xfe,0x87,
    0x18,0xe1,0x7f,0xff,0xc7,0x18,0xe1,0x7f,0xff,0xc3,0x18,0xc3,0xff,0xff,
    0xe1,0x3c,0x87,0xff,0xfe,0x70,0x3c,0x0f,0x7f,0x7c,0x78,0x3c,0x1e,0x3e,
    0x00,0x7c,0x3e,0x3e,0x00,0x00,0x7f,0x7e,0xfe,0x00,0x80,0x7f,0x7e,0xfe,
    0x00,0x80,0x3f,0x7e,0xfe,0x01,0x80,0x3f,0xff,0xfc,0x01,0x80,0x3f,0xff,
    0xfc,0x01,0x00,0x1f,0xff,0xf8,0x00,0x00,0x04,0xff,0x20,0x00,0x00,0x00,
    0xff,0x00,0x00,0x00,0x00,0xff,0x00,0x00,0x00,0x00,0x7e,0x00,0x00,0x00,
    0x00,0x3c,0x00,0x00
};

// clang-format on
