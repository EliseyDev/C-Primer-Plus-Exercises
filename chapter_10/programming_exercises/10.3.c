#include <stdio.h>

int get_max_value(const int *array, int n);

int main(void) {
    int array[] = {1, 2, 6, 4, 2};

    int max_value = get_max_value(array, sizeof(array) / sizeof(int));

    printf("max value is %d", max_value);

    return 0;
}

int get_max_value(const int *array, int n) {
    int value = *array;

    for (int i = 0; i < n; i++) {
        if (array[i] > value) {
            value = array[i];
        }
    }

    return value;
}
