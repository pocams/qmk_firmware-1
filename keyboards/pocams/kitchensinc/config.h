#pragma once
#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xBEEF
#define PRODUCT_ID      0x514C
#define DEVICE_VER      0x0001
#define MANUFACTURER    Mark
#define PRODUCT         KitchenSinc
#define DESCRIPTION     Fancy pants split keyboard

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 14
#define MATRIX_COLS 9

// wiring of each half
#define MATRIX_ROW_PINS { B4, E6, D7, C6, D4, D0, D1 }
#define MATRIX_COL_PINS { B5, F4, F5, F6, F7, B1, B3, B2, B6 }
//#define MATRIX_ROW_PINS_RIGHT { B1, B2, D2, F1, F4 }
//#define MATRIX_COL_PINS_RIGHT { D4, D7, D3, B7, F0, B3 }
//#define SPLIT_HAND_PIN D5

// Detect handedness by a flag in eeprom, set when flashing
#define EE_HANDS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* serial.c configuration for split keyboard */
#define USE_SERIAL
#define SOFT_SERIAL_PIN D2

#define RGBLIGHT_SPLIT
#define RGB_DI_PIN D3
#define RGBLED_NUM 50
#define RGBLED_SPLIT { 25, 25 }

// #define RGBLIGHT_ANIMATIONS

// Max brightness
#define RGBLIGHT_LIMIT_VAL 50

// No LEDs by default
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_STATIC_LIGHT
#define RGBLIGHT_DEFAULT_VAL 0