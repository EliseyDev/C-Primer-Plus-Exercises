/* echo_eof.c -- repeats input to end of file */

#include <stdio.h>

int main() {
    unsigned int ch;

    while ((ch = getchar()) != EOF) {
        putchar(ch);
    }

    return 0;
}
