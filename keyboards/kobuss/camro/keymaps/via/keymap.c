#include QMK_KEYBOARD_H
    
// KEEB: ENCS,  KEY0,  KEY1,  KEY2
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT_default(
    KC_SYSTEM_SLEEP, MO(1), KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK),  \

[1] = LAYOUT_default(
    RESET, KC_NO, RGB_TOG, RGB_MODE_FORWARD),  \

[2] = LAYOUT_default(
    KC_NO, KC_NO, KC_NO, KC_NO),  \

[3] = LAYOUT_default(
    KC_NO, KC_NO, KC_NO, KC_NO)  \

};

void encoder_update_user(uint8_t index, bool clockwise) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
}