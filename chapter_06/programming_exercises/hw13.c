#include <stdio.h>

const int ARRAY_SIZE = 8;

int main(void) {
    int array[ARRAY_SIZE];

    int base_degree = 1;
    int degree = 2;
    array[0] = base_degree;

    for (int i = 1; i < ARRAY_SIZE; ++i) {
        base_degree *= degree;
        array[i] = base_degree;
    }

    int counter = 0;
    do {
        printf("2 в степени: %d = %d\n", counter, array[counter]);
        ++counter;
    } while (counter < ARRAY_SIZE);

    return 0;
}
