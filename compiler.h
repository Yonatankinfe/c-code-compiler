#define TOKEN_INT 1
#define TOKEN_RETURN 2
#define TOKEN_IDENTIFIER 3
#define TOKEN_OPERATOR 4

typedef struct {
    int token_type;
    char lexeme[100];
} Token;

void tokenize(const char* filename);
void parse();
void generate_code();
