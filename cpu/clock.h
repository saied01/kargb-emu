#pragma once

#include <stdint.h>

typedef struct clock
{
  uint8_t m; // machine cycles
  uint8_t t; // t-states
} clock_t;
