#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;
    int word_count = 0;
    int letter_sum = 0;
    int letter_count = 0;

    while ((ch = getchar()) != EOF) {
        if (letter_count > 0 && isspace(ch)) {
            ++word_count;
            letter_count = 0;
        } else if (!ispunct(ch)) {
            ++letter_count;
            ++letter_sum;
        }
    }
    printf("Среднее количество букв в словах: %lf\n", (double) letter_sum / word_count);
    printf("Программа завершена.\n");

    return 0;
}
