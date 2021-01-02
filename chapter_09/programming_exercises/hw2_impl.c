#include "hw2_lib.h"
#include <stdio.h>

void chline(char ch, int i, int j) {
    for (int spaces = 0; spaces < i; spaces++) {
        putchar(' ');
    }

    for (int repeat = i; repeat < j; repeat++) {
        printf("%c", ch);
    }
}
