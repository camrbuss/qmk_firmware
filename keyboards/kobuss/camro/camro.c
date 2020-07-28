#include "camro.h"

#ifdef RGBLIGHT_ANIMATIONS
void keyboard_post_init_user(void) {
    rgblight_enable_noeeprom();
    rgblight_mode_noeeprom(RGBLIGHT_MODE_BREATHING);
    rgblight_sethsv_noeeprom(HSV_WHITE);

}
#endif