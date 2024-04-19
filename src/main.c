#include <stdio.h>
#include <stdlib.h>

#include "../include/fileio.h"

int main(int argc, char** argv) {

    if (argv[1] < 2) {
        printf("USAGE: %s <filename.c8>", argv[0]);
        return EXIT_FAILURE;
    }

    read_file(argv[1]);

    return EXIT_SUCCESS;
}