#pragma once

#include "config_common.h"

#define VENDOR_ID 0xFEED
#define PRODUCT_ID 0x0A0C
#define DEVICE_VER 0x0068
#define MANUFACTURER "Storyboard"
#define PRODUCT "Storyboard Custom Keyboard"

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 16

#define MATRIX_ROW_PINS { F0, F1, F4, F5, F6 }
#define MATRIX_COL_PINS { B0, B1, B2, B3, B4, B5, B6, B7, C6, C7, D0, D1, D2, D3, D4, D5 }

#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5

#define USB_POLLING_INTERVAL_MS 1

#define FORCE_NKRO

#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE
