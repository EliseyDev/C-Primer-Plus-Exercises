#include <stdio.h>

void copy_arr(double target[], const double source[], int n);

void copy_ptr(double *target, const double *source, int n);

void copy_ptrs(double target[], const double source[], const double *n);

int main(void) {
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];

    copy_arr(target1, source, 5);
    copy_ptr(target2, source, 5);
    copy_ptrs(target3, source, source + 5);

    for (int i = 0; i < 5; ++i) {
        printf("array: source  at index %d = %.1f\n", i, source[i]);
        printf("array: target1 at index %d = %.1f\n", i, target1[i]);
        printf("array: target2 at index %d = %.1f\n", i, target2[i]);
        printf("array: target3 at index %d = %.1f\n", i, target3[i]);
        putchar('\n');
    }

    printf("Done.\n");

    return 0;
}

void copy_arr(double target[], const double source[], const int n) {
    for (int i = 0; i < n; i++) {
        target[i] = source[i];
    }
}

void copy_ptr(double *target, const double *source, const int n) {
    for (int i = 0; i < n; i++) {
        *(target + i) = *(source + i);
    }
}

void copy_ptrs(double target[], const double source[], const double *n) {
    int counter = 0;
    while (source < n) {
        target[counter++] = *source++;
    }
}
