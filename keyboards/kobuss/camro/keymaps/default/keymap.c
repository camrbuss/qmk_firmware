#include QMK_KEYBOARD_H

// KEEB: ENCS,  KEY0,  KEY1,  KEY2
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT_default(
    // MO(1), KC_MEDIA_NEXT_TRACK, KC_MEDIA_PLAY_PAUSE, KC_SYSTEM_SLEEP),  
    KC_SYSTEM_SLEEP, MO(1), KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK),  \

[1] = LAYOUT_default(
    // KC_1, RGB_MODE_FORWARD, RGB_TOG, RESET)  
    RESET, KC_1, RGB_TOG, RGB_MODE_FORWARD)  \
};

void encoder_update_user(uint8_t index, bool clockwise) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
}