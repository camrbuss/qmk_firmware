#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xDEAD
#define PRODUCT_ID      0xBEEF
#define DEVICE_VER      0x0001
#define MANUFACTURER KoBuss
#define PRODUCT Camro
#define DESCRIPTION Camro Macro Pad

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 2

#define MATRIX_COL_PINS {B11, B10}
#define MATRIX_ROW_PINS {B1, B0}
#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE    5

#define RGBLIGHT_ANIMATIONS
#define RGBW
#define SK6812
#define RGB_DI_PIN B15
#define RGBLED_NUM 4
#define WS2812_SPI SPID2
#define WS2812_SPI_MOSI_PAL_MODE 0

#define ENCODERS_PAD_A { A2 }
#define ENCODERS_PAD_B { A1 }
#define ENCODER_RESOLUTION 4