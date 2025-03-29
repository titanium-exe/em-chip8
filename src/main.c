#include "chip8.h"
#include <stdio.h>

int main(int argc, char** argv){

	if(argc !=2){
		printf("Usage: %s <rom file>\n", argv[0]);
		return 1;
	}

	Chip8 chip;
	chip8_init(&chip);
	chip8_load_rom(&chip, argv[1]);

	// emulation loop comes here
	
	printf("ROM Loaded and emulator initialized\n");

	return 0;

}
