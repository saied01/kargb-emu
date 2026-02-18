#include "mmu.h"

MMU::MMU(Gameboy &gb)
    : gb(gb)
{
}

auto MMU::read(const uint8_t addr) const -> uint8_t
{
  return gb.read(addr);
}
