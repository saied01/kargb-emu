#pragma once

#include <stdint.h>

void nop();
void ld_nn_sp();
void stop();
void jr_d();
void jr_cc_d(uint8_t op);
