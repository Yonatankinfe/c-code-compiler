# C Code Compiler

This repository contains a simple **C Code Compiler** built from scratch. It demonstrates the fundamental concepts of lexical analysis, syntax parsing, and code generation for C programs.

---

## Features

- Tokenization of C programs (lexical analysis).
- Syntax validation of C language constructs (parsing).
- Simple code generation for the C code.
- Error reporting for invalid C syntax.

---
---

## How It Works

### Step 1: Lexical Analysis
The **lexer** scans the input C file and breaks it into tokens such as:
- Keywords (`int`, `return`, etc.)
- Identifiers (`variable_name`)
- Operators (`+`, `-`, etc.)
- Separators (`;`, `,`, etc.)

### Step 2: Parsing
The **parser** checks if the sequence of tokens forms a valid syntax tree based on C grammar rules.

### Step 3: Code Generation
The **code generator** translates valid C code into an executable format.
---
#### 2. Build the compiler using make:

make


#### 3. Run the compiler on a sample C program:

./c_compiler examples/example1.c


#### 4. Output:

Syntax analysis results (success or errors).

Generated output file: output.c.



#### 5. Compile the generated code:

gcc output.c -o program


#### 6. Execute the compiled program:

./program

---

## Installation and Usage

### Prerequisites
- GCC Compiler
- Make Utility (Optional)

### Steps to Compile and Run

1. Clone this repository:
   ```bash
   git clone https://github.com/YourUsername/c-code-compiler.git
   cd c-code-compiler
