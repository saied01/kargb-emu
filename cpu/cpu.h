#pragma once

#include "register_file.h"
#include <cstdint>
#include <ctime>

class CPU
{
public:
  CPU();

  auto tick();

  void decode_and_execute(uint8_t opcode);

  // BLOCKS
  void decode_block_0(uint8_t op1, uint8_t op2);
  void decode_block_1(uint8_t op1, uint8_t op2);
  void decode_block_2(uint8_t op1, uint8_t op2);
  void decode_block_3(uint8_t op1, uint8_t op2);

private:
  clock_t clock;
  Byte_register a, b, c, d, e, h, l, f;
  Word_register PC, SP;
  Pair_register af, bc, de, hl;
};
