# Stephen Prata "C Primer Plus" book programming exercises

## Contents at a Glance:

### Chapter 1: "Getting ready"

- Why C?
- Language standards
- Programming mechanics

### Chapter 2: "Introducing C"

- Simple example of C
- The structure of a simple program
- Introducing debugging
- Keywords and reserved identifiers
- Key concepts

### Chapter 3: "Data and C"

- Data variables and constants
- Data: Data-type keywords
- Basic C data types
- Using data types
- Arguments and pitfalls

### Chapter 4: "Character Strings and Formatted Input/Output"

- Function: strlen()
- Keywords: const
- Character strings
- How character strings are created and stored
- How you can use scanf() and printf() to read and display character strings
- How to use the strlen() function to measure string lengths
- The C preprocessor’s #define directive and ANSI C’s const modifier for creating symbolic constants

### Chapter 5: "Operations, Expressions, and Statements"

- Keyword: while, typedef
- Operators: = - * / % -- (type)
- C’s multitudinous operators, including those used for common arithmetic operations
- Operator precedence and the meanings of the terms statement and expression
- The handy while loop
- Compound statements, automatic type conversions, and type casts
- How to write functions that use arguments

### Chapter 6: "C Control Statements: Looping"

- Keywords: for, while, do while
- Operators: < > >= <= != == += *= -= /= %=
- Functions: fabs()
- C’s three loop structures— while , for , and do while
- Using relational operators to construct expressions to control these loops
- Several other operators
- Arrays, which are often used with loops
- Writing functions that have return values

### Chapter 7: "C Control Statements: Branching And Jumps"

- Keywords: if , else , switch , continue   
  break , case , default , goto
- Operators: && || ?:
- Functions: getchar() , putchar() , the ctype.h family
- How to use the if and if else statements and how to nest them
- Using logical operators to combine relational expressions into more involved test expressions
- C’s conditional operator
- The switch statement
- The break , continue , and goto jumps
- Using C’s character I/O functions— getchar()  and putchar()
- The family of character-analysis functions provided by the ctype.h header file

### Chapter 8: "Character Input/Output and Input Validation"

- More about input, output, and the differences between buffered and unbuffered input
- How to simulate the end-of-file condition from the keyboard
- How to use redirection to connect your programs to files
- Making the user interface friendlier

### Chapter 9: "Functions"

- Keyword: return
- Operators: *  (unary)  &  (unary)
- Functions and how to define them
- How to use arguments and return values
- How to use pointer variables as function arguments
- Function types
- ANSI C prototypes
- Recursion

### Chapter 10: "Arrays and Pointers"

- Keyword: static
- Operators: & *  (unary)
- How to create and initialize arrays
- Pointers (building on the basics you already know) and see how they relate to arrays
- Writing functions that process arrays
- Two-dimensional arrays

### Chapter 11: "Character Strings and Strings Functions"

- Functions: gets(), gets_s(), fgets(), puts(), fputs(), strcat(), strncat(), strcmp(), strncmp(), strcpy(), strncpy(),
  sprintf(), strchr()
- Creating and using strings
- Using several string and character functions from the C library and creating your own string functions
- Using command-line arguments

### Chapter 12: "Storage Classes, Linkage, and Memory Management"

- Keywords: auto, extern, static, register, const, volatile, restricted, _Thread_local,
  _Atomic
- Functions: rand(), srand(), time(), malloc(), calloc(), free()
- How C allows you to determine the scope of a variable (how widely known it is) and the lifetime of a variable (how
  long it remains in existence)
- Designing more complex programs

### Chapter 13: "File Input/Output"

- Functions: fopen(), getc(), putc(), exit(), fclose(), fprintf(), fscanf(), fgets(), fputs(), rewind(), fseek(),
  ftell(), fflush(), fgetpos(), fsetpos(), feof(), ferror(), ungetc(), setvbuf(), fread(), fwrite()
- How to process files using C’s standard I/O family of functions
- Text modes and binary modes, text and binary formats, and buffered and nonbuffered I/O
- Using functions that can access files both sequentially and randomly

### Chapter 14: "Structures and Other Data Forms"

- Keywords: struct, union, typedef
- Operators: . ->
- What C structures are and how to create structure templates and variables
- How to access the members of a structure and how to write functions to handle structures
- C’s typedef facility
- Unions and pointers to functions

### Chapter 15: "Bit Fiddling"

- Operators: ~ & |^ > > << &= |= ^= >>= <<=
- Binary, octal, and hexadecimal number notations (a review)
- Two C facilities for handling the individual bits in a value: bitwise operators and bit fields
- Keywords: _Alignas, _Alignof

### Chapter 16: "The C Preprocessor and the C Library"

- Preprocessor directives: # define, #include, #ifdef # else, #endif, #ifndef, # if, #elif, #line, #error, #pragma
- Keywords: _Generic, _Noreturn, _Static_assert
- Functions/Macros: sqrt(), atan(), atan2(), exit(), atexit(), assert(),   
  memcpy(), memmove(), va_start(), va_arg(), va_copy(), va_end()
- More capabilities of the C preprocessor
- Function-like macros and conditional compilation
- The generic selection expression
- Inline functions
- The C library in general and some of its handy functions in particular

### Chapter 17: "Advanced Data Representation"

- Functions: More malloc()
- Using C to represent a variety of data types
- New algorithms and increasing your ability to develop programs conceptually
- Abstract data types (ADTs)    