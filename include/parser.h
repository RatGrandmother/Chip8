#include <string.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

struct Scanner {
    int current_line;
    int current_column;

    int Vx;
    int Vy;
};
void parse_filetxt(const char* contents, size_t size);