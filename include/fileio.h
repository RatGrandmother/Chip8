#include <stdio.h>
#include <stdlib.h>

#ifndef FILEIO_H
#define FILEIO_H

char* read_file(char* buffer) {
    FILE* file_p = fopen(buffer, "r");
    char* contents;
    if (file_p == NULL) {
        printf("ERRRRR: Could not open file %s\n", buffer);
        return NULL;
    }

    fseek(file_p, 0, SEEK_END);
    long file_size = ftell(file_p);
    rewind(file_p);

    contents = (char*)malloc(file_size * sizeof(char));
    fread(contents, sizeof(char), file_size, file_p);

    contents[file_size] = '\0';

    return contents;

    // cleanup
    free(contents);
    fclose(file_p);
}

#endif // FILEIO_H