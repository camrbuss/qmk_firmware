#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // KEY0,  KEY2,  KEY1,  ENCSW
[0] = LAYOUT_default(
    RGB_TOG,  MO(1),    RGB_VAI,   RGB_MODE_BREATHE),  \

[1] = LAYOUT_default(
    KC_VOLU, _______, RGB_SAD, RGB_HUD),  \
};

void encoder_update_user(uint8_t index, bool clockwise) {
        if (clockwise) {
            tap_code(KC_1);
        } else {
            tap_code(KC_2);
        }
}