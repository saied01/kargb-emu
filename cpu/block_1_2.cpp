#include "cpu.h"
#include <cstdint>

void CPU::decode_block_1(uint8_t op1, uint8_t op2)
{
  if (op1 == 6 && op2 == 6)
  {
    // halt();
  }
  else
  {
    // ld_rr();
  }
}

void CPU::decode_block_2(uint8_t op1, uint8_t op2)
{
}
