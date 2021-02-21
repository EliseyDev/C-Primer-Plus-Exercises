/* Devise a function chline(ch,i,j) that prints the requested character in columns i
through j. Test it in a simple driver. */

#include "9.2_lib.h"
#include <stdio.h>

void chline(char ch, int i, int j) {
    for (int spaces = 0; spaces < i; spaces++) {
        putchar(' ');
    }

    for (int repeat = i; repeat < j; repeat++) {
        printf("%c", ch);
    }
}
