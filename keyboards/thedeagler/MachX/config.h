#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    thedeagler
#define PRODUCT         MachX
#define DESCRIPTION     Mech with a Mac layout

/* key matrix size */
#define MATRIX_ROWS 7
#define MATRIX_COLS 15

/* key matrix pins */
#define MATRIX_ROW_PINS { D5, F0, F1, F4, F5, F6, F7 }
#define MATRIX_COL_PINS { B2, E6, B3, B7, C7, C6, B6, B5, B4, D7, D6, D4, D3, D2, B0 }
#define UNUSED_PINS

/* rotary encoder support */
// #define ENCODERS_PAD_A { D0 }
// #define ENCODERS_PAD_B { D1 }
// #define ENCODER_RESOLUTION 2

/* dip switch support */
#define DIP_SWITCH_PINS { D1, B1 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */
// #define BACKLIGHT_PIN B7
// #ifdef BACKLIGHT_PIN
// #define BACKLIGHT_LEVELS 0
// #endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
/*
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)
*/

/* prevent stuck modifiers */
// #define PREVENT_STUCK_MODIFIERS

/* Mousekey options */
#define MOUSEKEY_WHEEL_DELAY 0
#define MOUSEKEY_WHEEL_INTERVAL	8
#define MOUSEKEY_WHEEL_MAX_SPEED 1
#define MOUSEKEY_WHEEL_TIME_TO_MAX 0