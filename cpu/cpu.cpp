#include "cpu.h"
#include <cstdint>

CPU::CPU(Gameboy &gb)
    : gb(gb)
    , af(a, f)
    , bc(b, c)
    , de(d, e)
    , hl(h, l)
{
}

uint8_t CPU::tick()
{
  // TODO: handle_interrupts();
  uint8_t opcode = gb.fetch_instruction(PC.value());
  uint8_t cycles = decode_and_execute(opcode);
  return cycles;
}

void CPU::init_PC(bool skip_bootrom)
{
  if (skip_bootrom)
    this->PC.set(0x0100);
  else
    this->PC.set(0x0000);
}

uint8_t CPU::decode_and_execute(uint8_t opcode)
{
  uint8_t block = (opcode & 0xC0) >> 6; // 0xC0 = 11000000
  uint8_t v1 = (opcode & 0x38) >> 3;    // 0x38 = 0011100
  uint8_t v2 = opcode & 0x07;           // 0x07 = 00000111

  switch (block)
  {
  case 0:
    return decode_block_0(v1, v2);
  case 1:
    return decode_block_1(v1, v2);
  case 2:
    return decode_block_2(v1, v2);
  case 3:
    return decode_block_3(v1, v2);
  }
  return 0;
}
