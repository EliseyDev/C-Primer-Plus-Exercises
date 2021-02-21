/* Write a program that reads input until encountering  # . Have the program print each
input character and its ASCII decimal code. Print eight character-code pairs per line.
Suggestion: Use a character count and the modulus operator ( % ) to print a newline
character for every eight cycles of the loop. */

#include <stdio.h>

int main(void) {
    int ch;
    int counter = 0;

    while ((ch = getchar()) != '#') {
        if (ch == '\n') {
            continue;
        }
        printf("%c-%d ", ch, ch);

        if (++counter % 8 == 0) {
            printf("\n");
            counter = 0;
        }
    }
    putchar('\n')
    printf("Exit program.\n");

    return 0;
}
