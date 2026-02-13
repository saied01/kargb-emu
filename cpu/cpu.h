#pragma once

#include "register_file.h"
#include <cstdint>
class CPU
{
public:
  CPU(int);
  register_file_t regs;

  void decode_and_execute(uint8_t opcode);

  // BLOCK0
};
