#include <stdio.h>

#define ROW 3
#define COLUMN 5

void mult_arr(int n, int m, int arr[n][m]);

void print_arr(int n, int m, const int arr[n][m]);

int main(void) {
    int array[ROW][COLUMN] = {
            {1,  2,  3,  4,  5},
            {11, 12, 13, 14, 15},
            {21, 22, 23, 24, 25}
    };

    print_arr(ROW, COLUMN, array);
    mult_arr(ROW, COLUMN, array);
    print_arr(ROW, COLUMN, array);

    return 0;
}

void mult_arr(const int n, const int m, int arr[n][m]) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] *= 2;
        }
    }
}

void print_arr(const int n, const int m, const int arr[n][m]) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("array[%d][%d] = %d\n", i, j, arr[i][j]);
        }
        putchar('\n');
    }
}
