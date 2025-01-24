#include "compiler.h"
#include <stdio.h>
#include <string.h>

// Example of tokenization
void tokenize(const char* filename) {
    FILE* file = fopen(filename, "r");
    if (!file) {
        printf("Error: File not found.\n");
        return;
    }

    char buffer[256];
    while (fscanf(file, "%s", buffer) != EOF) {
        // Simple tokenization logic (for demo purposes)
        if (strcmp(buffer, "int") == 0) {
            printf("TOKEN_INT: %s\n", buffer);
        } else if (strcmp(buffer, "return") == 0) {
            printf("TOKEN_RETURN: %s\n", buffer);
        } else {
            printf("TOKEN_IDENTIFIER: %s\n", buffer);
        }
    }
    fclose(file);
}
