#pragma once

#include <stdint.h>
#include <vector>

class Gameboy
{
public:
  Gameboy() = default;
  void load_rom(char *dir);

private:
  std::vector<uint8_t> rom;
};
