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

  void decode_and_execute(uint8_t opcode);
  void update_pc(uint16_t);

  // BLOCKS
  uint8_t block_0_inst(uint8_t op1, uint8_t op2);
  uint8_t block_1_inst(uint8_t op1, uint8_t op2);

private:
  uint16_t PC;
  uint16_t SP;
  // TODO: modelar memoria y agregarla como valor del CPU
};
