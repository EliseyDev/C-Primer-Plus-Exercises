#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;
    int upper_letter_count = 0;
    int lower_letter_count = 0;
    int symbols_count = 0;

    while ((ch = getchar()) != EOF) {
        if (islower(ch)) {
            ++lower_letter_count;
            continue;
        } else if (isupper(ch)) {
            ++upper_letter_count;
            continue;
        } else {
            ++symbols_count;
        }
    }

    printf("Количество символов:\nПрописных: %d\nСтрочных: %d\nОстальные: %d\n", upper_letter_count, lower_letter_count,
           symbols_count);

    return 0;
}
