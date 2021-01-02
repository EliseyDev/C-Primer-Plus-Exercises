/* Write a program that reads input until encountering the  #  character and then reports
the number of spaces read, the number of newline characters read, and the number of all
other characters read. */

#include <stdio.h>

int main(void) {
    unsigned char ch;
    int space_counter = 0;
    int symbol_counter = 0;
    int newline_counter = 0;

    while ((ch = getchar()) != '#') {
        if (ch == ' ') {
            ++space_counter;
        } else if (ch == '\n') {
            ++newline_counter;
        } else {
            ++symbol_counter;
        }
    }

    printf("Characters : %d, spaces: %d, newline: %d\n", symbol_counter, space_counter, newline_counter);
    printf("Exit program.\n");

    return 0;
}
