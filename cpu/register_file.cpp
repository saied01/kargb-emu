#include "register_file.h"
#include "cpu.h"
#include <stdint.h>

// TODO: define af(), set_af(), etc...

int nop(void)
{
  return 1;
}

int ld(CPU &cpu, uint8_t opcode)
{
  cpu.decode_and_execute(opcode);
  return 1;
}
