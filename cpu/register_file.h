#pragma once

#include <stdint.h>

typedef struct register_file
{
  uint8_t a, f;
  uint8_t b, c;
  uint8_t d, e;
  uint8_t h, l;

  uint16_t af() const;
  void set_af(uint16_t);

  uint16_t bc() const;
  void set_bc(uint16_t);

  uint16_t de() const;
  void set_de(uint16_t);

  uint16_t hl() const;
  void set_hl(uint16_t);
} register_file_t;
