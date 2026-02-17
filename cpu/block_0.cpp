#include "cpu.h"
#include "instructions.h"

void x0z0_inst(uint8_t op1);
void x0z1_inst(uint8_t op1);
void x0z2_inst(uint8_t op1);
void x0z3_inst(uint8_t op1);
void x0z4_inst(uint8_t op1);
void x0z5_inst(uint8_t op1);
void x0z6_inst(uint8_t op1);
void x0z7_inst(uint8_t op1);

void CPU::decode_block_0(uint8_t op1, uint8_t op2)
{
  switch (op2)
  {
  case 0:
    x0z0_inst(op1);
    break;
  case 1:
    x0z1_inst(op1);
    break;
  case 2:
    x0z2_inst(op1);
    break;
  case 3:
    x0z3_inst(op1);
    break;
  case 4:
    x0z4_inst(op1);
    break;
  case 5:
    x0z5_inst(op1);
    break;
  case 6:
    x0z6_inst(op1);
    break;
  case 7:
    x0z7_inst(op1);
    break;
  }
}

void x0z0_inst(uint8_t op)
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
}
