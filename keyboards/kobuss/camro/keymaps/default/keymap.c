#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    //      KEEB: ENCS,  KEY0,  KEY1,  KEY2
    // QMK ARRAY: KEY0,  KEY2,  KEY1,  ENCS
[0] = LAYOUT_default(
    MO(1), KC_MEDIA_NEXT_TRACK, KC_MEDIA_PLAY_PAUSE, KC_SYSTEM_SLEEP),  \

[1] = LAYOUT_default(
    KC_1, RGB_MODE_FORWARD, RGB_TOG, RESET)  \
};

void encoder_update_user(uint8_t index, bool clockwise) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
}