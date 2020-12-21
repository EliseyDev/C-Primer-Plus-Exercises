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

    printf("Символов: %d, пробелов: %d, новых строк: %d", symbol_counter, space_counter, newline_counter);

    return 0;
}
