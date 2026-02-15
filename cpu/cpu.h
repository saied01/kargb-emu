#pragma once

#include "register_file.h"
#include <cstdint>
#include <ctime>

class CPU
{
public:
  CPU();
  clock_t clock;
  register_file_t regs;

  auto tick();

  void decode_and_execute(uint8_t opcode);
  void update_pc(uint16_t);

  // BLOCKS
  void decode_block_0(uint8_t op1, uint8_t op2);
  void decode_block_1(uint8_t op1, uint8_t op2);
  void decode_block_2(uint8_t op1, uint8_t op2);
  void decode_block_3(uint8_t op1, uint8_t op2);

private:
  uint16_t PC;
  uint16_t SP;
  // TODO: modelar memoria y agregarla como valor del CPU
};
