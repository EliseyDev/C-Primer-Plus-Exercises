#include <stdio.h>

void reverse_array(double array[], int n);

int main(void) {
    double array[7] = {1.1, 2.2, 3.3, 4.4, 7.7, 6.6, 5.5};

    reverse_array(array, sizeof(array) / sizeof(double));

    for (int i = 0; i < sizeof(array) / sizeof(double); ++i) {
        printf("array at index: %d = %.1f\n", i, array[i]);
    }

    return 0;
}

void reverse_array(double array[], const int n) {
    double temp;
    int lower_bound = 0;
    for (int i = n - 1; i > (n / 2) - 1; --i) {
        temp = array[lower_bound];
        array[lower_bound] = array[i];
        array[i] = temp;
        ++lower_bound;
    }
}