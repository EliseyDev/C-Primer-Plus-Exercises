#include <stdio.h>

double diff_min_max(const double array[], int n);

int main(void) {
    double array[7] = {1.1, 2.2, 3.3, 4.4, 7.7, 6.6, 5.5};

    printf("Difference between max and min values in array = %.2f",
           diff_min_max(array, sizeof(array) / sizeof(double)));

    return 0;
}

double diff_min_max(const double array[], int n) {
    double min_value = array[0];
    double max_value = array[0];

    for (int i = 1; i < n; ++i) {
        if (min_value > array[i]) {
            min_value = array[i];
        } else if (max_value < array[i]) {
            max_value = array[i];
        }
    }

    return max_value - min_value;
}