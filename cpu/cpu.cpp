#include "cpu.h"
// #include "register_file.h"
#include <cstdint>

CPU::CPU(int a)
{
}

uint8_t block_0_inst(uint8_t op1, uint8_t op2)
{
  return 1;
}

void CPU::decode_and_execute(uint8_t opcode)
{
  uint8_t block = (opcode & 0xC0) >> 6; // 0xC0 = 11000000
  uint8_t v1 = (opcode & 0x38) >> 3;    // 0x38 = 0011100
  uint8_t v2 = opcode & 0x07;           // 0x07 = 00000111

  switch (block)
  {
  case 0:
    block_0_inst(v1, v2);
  }
}
