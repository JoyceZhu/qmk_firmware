#pragma once

#include "config_common.h"

// Wiring
#define MATRIX_ROWS           12 // Rows are doubled-up
#define MATRIX_COLS           7
#define MATRIX_ROW_PINS       { D1, D0, D4, C6, D7, E6 }
#define MATRIX_COL_PINS       { B2, B3, B1, F7, F6, F5, F4 }
#define MATRIX_ROW_PINS_RIGHT { F4, F5, F6, F7, B1, B3 }
#define MATRIX_COL_PINS_RIGHT { D1, D0, D4, C6, D7, E6, B4 }
#define SOFT_SERIAL_PIN       D2

// Communication
#define USE_SERIAL
#define EE_HANDS
#define MASTER_LEFT
#define DIODE_DIRECTION COL2ROW

// USB device
#define VENDOR_ID    0xFEED
#define PRODUCT_ID   0x3060
#define DEVICE_VER   0x0001
#define MANUFACTURER sczizzo
#define PRODUCT      dactylx
#define DESCRIPTION  dactylx

// Options
#define DEBOUNCE 5
#define IGNORE_MOD_TAP_INTERRUPT
#define LOCKING_RESYNC_ENABLE
#define NO_ACTION_FUNCTION
#define NO_ACTION_MACRO
#define NO_ACTION_ONESHOT
#define PERMISSIVE_HOLD
#define PREVENT_STUCK_MODIFIERS
#define TAPPING_TERM 200
#define TAPPING_TOGGLE 2
