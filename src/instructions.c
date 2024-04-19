#include "../include/instructions.h"



// running bitwise instruction
void run_bitwise_instruction(INSTRUCTIONS instruction, int Vx, int Vy) {
    switch (instruction)
    {
    case AND:
        Vx = Vx & Vy;
        break;
    case XOR:
        Vx = Vx ^ Vy;
    case OR:
        Vx = Vx | Vy;
        break;
    default:
        break;
    }
}