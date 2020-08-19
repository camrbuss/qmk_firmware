#include "camro.h"
#include "i2c_master.h"

#ifdef RGBLIGHT_ANIMATIONS
void keyboard_post_init_user(void) {
    debug_enable = true;
    rgblight_enable_noeeprom();
    rgblight_mode_noeeprom(RGBLIGHT_MODE_BREATHING);
    rgblight_sethsv_noeeprom(0,0,0);
    rgblight_disable_noeeprom();

    setPinOutput(TEST_OUTPUT_PIN);
    i2c_init();
}
#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {

    if (record->event.pressed == true)
    {
      togglePin(TEST_OUTPUT_PIN);
      uint8_t data[1] = {0x00};
      int16_t x = i2c_transmit(0x3C << 1, data, 1, 100);
      printf_("Test Send Result: %i\n", x);
    }
  
  return true;
}
