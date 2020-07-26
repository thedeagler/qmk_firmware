#include "MachX.h"

led_config_t g_led_config = { {
  // Key Matrix to LED Index
  { 0, 1, 2, 3, 4, 5, 6, 7 },
  { 8, 9, 10, 11, 12, 13, 14, 15 },
  { 16, 17, 18, 19, 20, 21, 22, 23 },
  { 24, 25, 26, 27, 28, 29, NO_LED, NO_LED },
}, {
  // LED Index to Physical Position
  { 25, 13, }, { 50, 13, }, { 75, 13, }, { 100, 13, }, { 125, 13, }, { 150, 13, }, { 175, 13, }, { 200, 13, },
  { 25, 26, }, { 50, 26, }, { 75, 26, }, { 100, 26, }, { 125, 26, }, { 150, 26, }, { 175, 26, }, { 200, 26, },
  { 25, 39, }, { 50, 39, }, { 75, 39, }, { 100, 39, }, { 125, 39, }, { 150, 39, }, { 175, 39, }, { 200, 39, },
  { 75, 52, }, { 100, 52, }, { 125, 52, }, { 150, 52, }, { 175, 52, }, { 200, 52, }
}, {
  // LED Index to Flag
  2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2
} };