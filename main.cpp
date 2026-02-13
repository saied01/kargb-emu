#include <cstdint>
#include <fstream>
#include <iostream>

int main(int argc, char **argv)
{
  std::ifstream emu("cpu_instrs.gb", std::ios::binary);
  uint8_t instruction;
  emu.read((char *)&instruction, sizeof(instruction));
  std::cout << instruction << std::endl;
  emu.close();

  return 0;
}
