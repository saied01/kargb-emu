#include "gameboy.h"
#include <fstream>
#include <ios>
#include <iostream>
#include <stdint.h>
#include <vector>

void Gameboy::load_rom(char *dir)
{
  // abre archivo al final con 'ate'(esta el tamanio)
  std::ifstream game(dir, std::ios::binary | std::ios::ate);
  std::streamsize size = game.tellg();
  std::vector<uint8_t> rom(size);
  // lee todo directo (total tiene el tamanio justo)
  game.read((char *)rom.data(), size);
  game.close();

  this->rom = rom;
}
