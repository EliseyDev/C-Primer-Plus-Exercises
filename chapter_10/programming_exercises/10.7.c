#include <stdio.h>

#define ROW 3
#define COLUMN 3

void copy_ptr(double *target, const double *source, int n);

int main(void) {
    double source[ROW][COLUMN] = {
            {1.1, 2.2, 3.3},
            {4.4, 5.5, 6.6},
            {7.7, 8.8, 9.9}
    };

    double target[ROW][COLUMN];

    for (int i = 0; i < ROW; ++i) {
        copy_ptr(target[i], source[i], COLUMN);
    }

    for (int i = 0; i < ROW; ++i) {
        for (int j = 0; j < COLUMN; ++j) {
            printf("target[%d][%d] = %.1f\n", i, j, target[i][j]);
        }
        putchar('\n');
    }

    return 0;
}

void copy_ptr(double *target, const double *source, int n) {
    for (int i = 0; i < n; ++i) {
        target[i] = source[i];
    }
}