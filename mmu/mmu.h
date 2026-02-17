#pragma once

#include <cstdint>
#include <fstream>
#include <ios>
#include <iostream>
#include <stdint.h>
#include <vector>

class MMU
{
public:
  MMU() = default;

  uint8_t read_addr_8();
  uint8_t write_addr_8();

  uint16_t read_addr_16();
  uint16_t write_addr_16();

private:
};
