#include "cpu.h"
#include <cstdint>

uint8_t CPU::decode_block_1(uint8_t op1, uint8_t op2)
{
  if (op1 == 6 && op2 == 6)
  {
    // halt();
  }
  else
  {
    // ld_rr();
  }
  return 1;
}

uint8_t CPU::decode_block_2(uint8_t op1, uint8_t op2)
{
  return 0;
}
