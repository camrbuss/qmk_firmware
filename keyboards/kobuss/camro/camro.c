#include "camro.h"

// TODO: Add timer to display logo for a little bit at bootup
// TODO: Experiment with Unicode emojis on an additional layer

#ifdef RGBLIGHT_ANIMATIONS
void keyboard_post_init_user(void) {
    debug_enable = true;
    rgblight_enable_noeeprom();
    rgblight_mode_noeeprom(RGBLIGHT_MODE_BREATHING);
    rgblight_sethsv_noeeprom(0,0,0);
    rgblight_disable_noeeprom();

    setPinOutput(TEST_OUTPUT_PIN);
}
#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {

    if (record->event.pressed == true)
    {
      togglePin(TEST_OUTPUT_PIN);
    }
  
  return true;
}

#ifdef OLED_DRIVER_ENABLE
void oled_task_user(void) {
    // Host Keyboard Layer Status
    // oled_write("Layer: ", false);
    // oled_write_ln("Undefined", false);

    // int x = get_highest_layer(layer_state);
    // char f[2];
    // itoa(x, f, 2);
    // oled_write("Mod: ", false);
    // oled_write(f, false);

    oled_write_raw(kobusslogo, OLED_MATRIX_SIZE);
}
#endif