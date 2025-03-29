#ifndef CHIP8_H
#define CHIP8_H

#include <stdint.h>

typedef struct {
    uint8_t memory[4096];     // 4K memory
    uint8_t V[16];            // V0 to VF registers
    uint16_t I;               // Index register
    uint16_t pc;              // Program counter

    uint8_t display[64 * 32]; // 64x32 monochrome display
    uint8_t delay_timer;
    uint8_t sound_timer;

    uint16_t stack[16];       // Call stack
    uint8_t sp;               // Stack pointer

    uint8_t keypad[16];       // Input keys

    uint8_t draw_flag;        // Set when display should be updated
} Chip8;

void chip8_init(Chip8 *chip);
void chip8_load_rom(Chip8 *chip, const char *filename);
void chip8_step(Chip8 *chip);

#endif

