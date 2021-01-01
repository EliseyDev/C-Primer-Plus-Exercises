#include <stdio.h>

const int ARRAY_SIZE = 8;

int main(void) {

    int array[ARRAY_SIZE];
    int sum_array[ARRAY_SIZE];

    int accumulator = 0;

    printf("Введите 8 чисел для вычисления их суммы: ");

    for (int i = 0; i < ARRAY_SIZE; ++i) {
        scanf("%d", &array[i]);
        accumulator += array[i];
        sum_array[i] = accumulator;
    }

    for (int i = 0; i < ARRAY_SIZE; ++i) {
        printf("%4d", array[i]);
    }
    printf("\n");
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        printf("%4d", sum_array[i]);
    }

    return 0;
}
