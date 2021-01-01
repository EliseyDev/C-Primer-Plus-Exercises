#include <stdio.h>

int main(void) {
    int char_counter = 0;

    while (getchar() != EOF) {
        ++char_counter;
    }

    printf("Количество символов в файле: %d\n", char_counter);

    printf("Программа завершена.\n");


    return 0;
}
