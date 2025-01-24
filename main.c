#include "compiler.h"
#include <stdio.h>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("Usage: ./c_compiler <source_file.c>\n");
        return 1;
    }

    tokenize(argv[1]);
    parse();
    generate_code();

    return 0;
}
