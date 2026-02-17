#include "cpu/cpu.h"
#include "gameboy/gameboy.h"
#include "mmu/mmu.h"

int main(int argc, char **argv)
{
  if (argc != 2)
    return 1;

  Gameboy gb;
  CPU cpu(gb);
  MMU mmu;

  gb.load_rom(argv[1]);
  cpu.init_PC(true);

  while (1)
  {
    // cpu.tick();
  }

  return 0;
}
