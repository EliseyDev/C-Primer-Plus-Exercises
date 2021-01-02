// cypher2.c -- alters input, preserving non-letters

#include <stdio.h>
#include <ctype.h>

int main(void) {
    unsigned char ch;
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) {
            putchar(ch + 1);
        } else {
            putchar(ch);
        }
    }
    putchar(ch);

    return 0;
}
