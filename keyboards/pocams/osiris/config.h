#pragma once
#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xBEEF
#define PRODUCT_ID      0x0515
#define DEVICE_VER      0x0001
#define MANUFACTURER    Mark
#define PRODUCT         Osiris
#define DESCRIPTION     Split 50 percent ergonomic keyboard

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 6

// wiring of each half
#define MATRIX_ROW_PINS { D1, D0, D4, C6, D7 }
#define MATRIX_COL_PINS { E6, B4, B5, B6, B2, B3 }
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
#define SOFT_SERIAL_PIN D3
