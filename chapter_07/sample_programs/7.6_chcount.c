// chcount.c  -- use the logical AND operator

#include <stdio.h>

#define PERIOD '.'

int main(void) {
    char ch;
    int char_count = 0;

    while ((ch = getchar()) != PERIOD) {
        if (ch != '"' && ch != '\'') {
            char_count++;
        }
    }
    printf("There are %d non-quote characters.\n", charcount);

    return 0;
}
