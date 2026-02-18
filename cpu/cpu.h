#pragma once

#include "../gameboy/gameboy.h"
#include "register_file.h"
#include <cstdint>
#include <ctime>

class CPU
{
public:
  CPU(Gameboy &gb);

  uint8_t tick();

  void init_PC(bool skip_bootrom);

  uint8_t decode_and_execute(uint8_t opcode);

  // BLOCKS
  uint8_t decode_block_0(uint8_t op1, uint8_t op2);
  uint8_t decode_block_1(uint8_t op1, uint8_t op2);
  uint8_t decode_block_2(uint8_t op1, uint8_t op2);
  uint8_t decode_block_3(uint8_t op1, uint8_t op2);

private:
  Gameboy &gb;
  clock_t clock;
  Byte_register a, b, c, d, e, h, l, f;
  Word_register PC, SP;
  Pair_register af, bc, de, hl;
};
