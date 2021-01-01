#include "hw2_lib.h"
#include <stdio.h>

void chline(char ch, int i, int j) {
    for (int column = 0; column < i; column++) {
        for (int row = 0; row < j; row++) {
            printf("%c", ch);
        }
        putchar('\n');
    }

}
