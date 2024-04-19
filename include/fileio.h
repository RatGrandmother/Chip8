#include <stdio.h>
#include <stdlib.h>

#ifndef FILEIO_H
#define FILEIO_H

char* read_file(char* buffer) {
    FILE* file_p = fopen(buffer, "r");
    char* contents = (char*)malloc(sizeof(char));

    if (file_p == NULL) {
        printf("ERRRRR: Could not open file %s\n", buffer);
        return NULL;
    }

    

    fclose(file_p);
}

#endif // FILEIO_H