#include <stdio.h>

#define ROW 3
#define COLUMN 5

void copy_array(int n, int m, const double source[n][m], double target[n][m]);

void print_array(int n, int m, const double array[n][m]);

int main(void) {
    double source[ROW][COLUMN] = {
            {1.1, 1.2, 1.3, 1.4, 1.5},
            {2.1, 2.2, 2.3, 2.4, 2.5},
            {3.1, 3.2, 3.3, 3.4, 3.5},

    };

    double target[ROW][COLUMN];

    copy_array(ROW, COLUMN, source, target);

    print_array(ROW, COLUMN, source);
    print_array(ROW, COLUMN, target);

    return 0;
}

void copy_array(int n, int m, const double source[n][m], double target[n][m]) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            target[i][j] = source[i][j];
        }
    }
}

void print_array(int n, int m, const double array[n][m]) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("array[%d][%d] = %.1f\n", i, j, array[i][j]);
        }
        putchar('\n');
    }
}