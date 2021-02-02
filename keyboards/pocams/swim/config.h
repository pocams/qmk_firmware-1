#pragma once
#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xBEEF
#define PRODUCT_ID      0x5150
#define DEVICE_VER      0x0001
#define MANUFACTURER    Mark
#define PRODUCT         Swim
#define DESCRIPTION     Split ergonomic keyboard

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 14
#define MATRIX_COLS 9

// wiring of each half
#define MATRIX_ROW_PINS { D1, D0, D4, C6, D7, E6, B4 }
#define MATRIX_COL_PINS { B5, B6, B2, B3, B1, F7, F6, F5, F4 }

// Detect handedness by a flag in eeprom, set when flashing
#define EE_HANDS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* serial.c configuration for split keyboard */
#define USE_SERIAL
#define SOFT_SERIAL_PIN D3
