// Copyright (C) 2020  Cameron Buss

// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.

#include "squash.h"

void keyboard_pre_init_user(void) {
  setPinOutput(INDICATOR_TOP_LED_PIN);
  setPinOutput(INDICATOR_MID_LED_PIN);
  setPinOutput(INDICATOR_BOT_LED_PIN);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

bool led_update_kb(led_t led_state) {
    bool res = led_update_user(led_state);
    if(res) {
        writePin(INDICATOR_TOP_LED_PIN, led_state.caps_lock);
    }
    return res;
}

layer_state_t layer_state_set_user(layer_state_t state) {
  switch (state)
  {
  case 1 << 1:
    writePinHigh(INDICATOR_MID_LED_PIN);
    break;
  case 1 << 2:
    writePinHigh(INDICATOR_BOT_LED_PIN);
    break;
  default:
    writePinLow(INDICATOR_MID_LED_PIN);
    writePinLow(INDICATOR_BOT_LED_PIN);
    break;
  }

  return state;
}

#ifdef OLED_DRIVER_ENABLE
void oled_task_user(void) {
    oled_write_raw(kobusslogo, OLED_MATRIX_SIZE);
}
#endif