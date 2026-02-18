#include "gameboy.h"
#include <cstdint>
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

uint8_t Gameboy::fetch_instruction(uint8_t addr)
{
  return rom[addr];
}
