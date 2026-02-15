#include "cpu/cpu.h"
#include <cstdint>
#include <fstream>
#include <ios>
#include <iostream>
#include <vector>

std::vector<uint8_t> load_rom(char *dir)
{
  // abre archivo al final con 'ate'(esta el tamanio)
  std::ifstream game(dir, std::ios::binary | std::ios::ate);
  std::streamsize size = game.tellg();
  std::vector<uint8_t> rom(size);
  // lee todo directo (total tiene el tamanio justo)
  game.read((char *)rom.data(), size);
  game.close();

  return rom;
}

int main(int argc, char **argv)
{
  if (argc != 2)
    return 1;
  CPU cpu;
  std::vector<uint8_t> rom = load_rom(argv[1]);

  while (1)
  {
    // decode -> execute
    // cpu.update_pc();
  }

  return 0;
}
