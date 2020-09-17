#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = { 
[0] = LAYOUT_default(
    KC_TAB,	KC_Q,	KC_W,	KC_E,	KC_R,	KC_T,	KC_Y,	KC_U,	KC_I,	KC_O,	KC_P,	KC_BSPACE, 
    KC_CAPSLOCK,	KC_A,	KC_S,	KC_D,	KC_F,	KC_G,	KC_H,	KC_J,	KC_K,	KC_L,	KC_ENTER,	 
    KC_LSHIFT,	KC_NO,	KC_Z,	KC_X,	KC_C,	KC_V,	KC_B,	KC_N,	KC_M,	KC_COMMA,	KC_DOT,	KC_RSHIFT, 
    KC_LCTRL,	KC_LGUI,	KC_LALT,	KC_NO,	KC_SPACE,	KC_NO,	KC_RALT,	MO(1),	KC_RCTRL,   RESET ),
[1] = LAYOUT_default(
    KC_Z,	KC_Z,	KC_Z,	KC_Z,	KC_Z,	KC_Z,	KC_Z,	KC_Z,	KC_Z,	KC_Z,	KC_Z,	KC_Z, 
    KC_Z,	KC_Z,	KC_Z,	KC_Z,	KC_Z,	KC_Z,	KC_Z,	KC_Z,	KC_Z,	KC_Z,	KC_Z, 
    KC_Z,	KC_Z,	KC_Z,	KC_Z,	KC_Z,	KC_Z,	KC_Z,	KC_Z,	KC_Z,	KC_Z,	KC_Z,	KC_Z, 
    KC_Z,	KC_Z,	KC_Z,	KC_Z,	KC_Z,	KC_Z,	KC_Z,	KC_Z,	KC_Z,	KC_Z ) 
};
