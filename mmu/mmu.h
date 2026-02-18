#pragma once

#include "../gameboy/gameboy.h"
#include <cstdint>
#include <fstream>
#include <ios>
#include <iostream>
#include <stdint.h>
#include <vector>

class MMU
{
public:
  MMU(Gameboy &gb);

  auto read(const uint8_t) const -> uint8_t;
  void write(const uint8_t addr, uint8_t byte);

private:
  Gameboy &gb;
};
