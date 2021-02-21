/* Write a function that takes three arguments: a character and two integers. The character
is to be printed. The first integer specifies the number of times that the character is to
be printed on a line, and the second integer specifies the number of lines that are to be
printed. Write a program that makes use of this function. */

#include <stdio.h>
#include "9.3_lib.h"

void print_char(char ch, int repeat, int row) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < repeat; ++j) {
            putchar(ch);
        }
        putchar('\n');
    }
}
