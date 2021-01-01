#include <stdio.h>

int main(void) {
    char ch;
    int lint_counter;
    for (ch = 'A', lint_counter = 1; ch <= 'U'; ++lint_counter) {
        for (int j = 1; j <= lint_counter; j++, ++ch) {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}