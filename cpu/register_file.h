#pragma once

#include <cstdint>
#include <stdint.h>

class Byte_register
{
public:
  Byte_register() = default;

  virtual void set(uint8_t new_value);
  void reset();
  uint8_t value() const;

  bool check_bit(uint8_t bit) const;
  void set_bit(uint8_t bit, bool set);

  void increment();
  void decrement();

  auto operator==(uint8_t other) const -> bool;

private:
  uint8_t val = 0x0;
};

class Word_register
{
public:
  Word_register() = default;
  virtual ~Word_register() = default;

  uint16_t value();
  virtual void set(uint16_t new_value);

  void increment();
  void decrement();

private:
  uint16_t val = 0x0;
};

class Pair_register : public Word_register
{
public:
  Pair_register(Byte_register &inHigh, Byte_register &inLow);

private:
  Byte_register &high;
  Byte_register &low;
};
