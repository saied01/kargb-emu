#pragma once

#include <cstdint>
#include <stdint.h>
#include <vector>

class Gameboy
{
public:
  Gameboy() = default;
  void load_rom(char *dir);

  uint8_t fetch_instruction(uint8_t);

private:
  std::vector<uint8_t> rom;
};
