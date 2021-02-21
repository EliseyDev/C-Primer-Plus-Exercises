#include <stdio.h>

void copy_ptrs(double target[], const double source[], const double *n);;

int main(void) {
    double source[7] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
    double target[3];

    copy_ptrs(target, source + 3, source + 6);

    for (int i = 0; i < 3; ++i) {
        printf("target[%d] = %.1f\n", i, target[i]);
    }

    return 0;
}

void copy_ptrs(double target[], const double source[], const double *n) {
    int counter = 0;
    while (source < n) {
        target[counter++] = *source++;
    }
}