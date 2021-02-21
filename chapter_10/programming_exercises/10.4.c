#include <stdio.h>

int max_elem_index(const double array[], int n);

int main(void) {
    double array[7] = {1.1, 2.2, 3.3, 4.4, 7.7, 6.6, 5.5};

    printf("index of max value in array = %d", max_elem_index(array, sizeof(array) / sizeof(double)));

    return 0;
}

int max_elem_index(const double array[], int n) {
    int max_value_index = 0;
    double max_value = array[0];

    for (int i = 0; i < n; ++i) {
        if (array[i] > max_value) {
            max_value = array[i];
            max_value_index = i;
        }
    }

    return max_value_index;
}