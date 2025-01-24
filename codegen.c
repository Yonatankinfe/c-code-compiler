#include "compiler.h"
#include <stdio.h>

void generate_code() {
    printf("Generating output C code...\n");
    FILE* output = fopen("output.c", "w");
    fprintf(output, "#include <stdio.h>\nint main() { return 0; }\n");
    fclose(output);
    printf("Code generation complete: output.c\n");
}
