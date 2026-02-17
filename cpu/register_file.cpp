#include "register_file.h"
// clang-format off

/* 8 BIT REGISTERS */
void Byte_register::set(uint8_t val) { this->val = val; }
void Byte_register::reset() { this->val = 0x0; }
uint8_t Byte_register::value() const { return this->val; }
void Byte_register::increment() { this->val++; }
void Byte_register::decrement() { this->val--; }

bool Byte_register::check_bit(uint8_t bit) const
{
  return val & (1 << bit);
}

void Byte_register::set_bit(uint8_t bit, bool set)
{
  if (set)
    val |= (1 << bit);
  else
    val &= ~(1 << bit);
}


/* 16 BIT REGISTERS */
