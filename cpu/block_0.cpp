#include "cpu.h"
#include "instructions.h"
#include <cstdint>

uint8_t x0z0_inst(uint8_t op1);
uint8_t x0z1_inst(uint8_t op1);
uint8_t x0z2_inst(uint8_t op1);
uint8_t x0z3_inst(uint8_t op1);
uint8_t x0z4_inst(uint8_t op1);
uint8_t x0z5_inst(uint8_t op1);
uint8_t x0z6_inst(uint8_t op1);
uint8_t x0z7_inst(uint8_t op1);

uint8_t CPU::decode_block_0(uint8_t op1, uint8_t op2)
{
  switch (op2)
  {
  case 0:
    return x0z0_inst(op1);
  case 1:
    return x0z1_inst(op1);
  case 2:
    return x0z2_inst(op1);
  case 3:
    return x0z3_inst(op1);
  case 4:
    return x0z4_inst(op1);
  case 5:
    return x0z5_inst(op1);
  case 6:
    return x0z6_inst(op1);
  case 7:
    return x0z7_inst(op1);
  }
  return 1;
}

uint8_t x0z0_inst(uint8_t op)
{
  switch (op)
  {
  case 0:
    nop();
    break;
  case 1:
    ld_nn_sp();
    break;
  case 2:
    stop();
    break;
  case 3:
    jr_d();
    break;
  default:
    jr_cc_d(op);
  }
  return 1;
}
