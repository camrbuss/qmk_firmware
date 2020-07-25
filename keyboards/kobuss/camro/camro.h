#pragma once

#include "quantum.h"

//      KEEB: ENCS,  KEY0,  KEY1,  KEY2
// QMK ARRAY: KEY0,  KEY2,  KEY1,  ENCS
#define LAYOUT_default( \
  K00, K01, K02, K03  \
) { \
  { K01,  K03 }, \
  { K02,  K00 }, \
}
