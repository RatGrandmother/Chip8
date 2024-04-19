#ifndef INSTRUCTIONS_H
#define INSTRUCTIONS_H

typedef enum INSTRUCTIONS {
    CLS,
    RET,
    SYS,
    JP,
    CALL,
    SNE,
    SE,
    LD,
    LD,
    OR,
    AND,
    XOR,
    ADD,
    SUB,
    SHR,
    // instruction limit ( for now )
} INSTRUCTIONS;

void run_instruction(INSTRUCTIONS instruction, int Vx, int Vy);

#endif