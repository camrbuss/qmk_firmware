#include "squash.h"

#ifdef OLED_DRIVER_ENABLE
void oled_task_user(void) {
    oled_write_raw(kobusslogo, OLED_MATRIX_SIZE);
}
#endif