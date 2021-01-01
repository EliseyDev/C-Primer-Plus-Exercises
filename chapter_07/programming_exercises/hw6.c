#include <stdio.h>

int main(void) {
    char current;
    char previous = -1;
    int sequence_count = 0;

    while ((current = getchar()) != '#') {
        if (previous == 'e' && current == 'i') {
            ++sequence_count;
        }
        previous = current;
    }

    printf("Количество вхождений ""ei"": %d\n", sequence_count);
    printf("Программа завершена.\n");

    return 0;
}
