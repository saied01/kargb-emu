#pragma once

#include <stdint.h>

struct clock
{
  uint8_t m = 0; // machine cycles
  uint8_t t = 0; // t-states
};
