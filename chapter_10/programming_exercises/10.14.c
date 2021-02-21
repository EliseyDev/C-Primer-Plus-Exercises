#include <stdio.h>

#define ROW 3
#define COLUMN 5

double get_row_average(int n, const double arr[n]);

double get_arr_average(int n, int m, const double arr[n][m]);

double get_max_val(int n, int m, const double arr[n][m]);

void print_arr(int n, int m, const double arr[n][m]);

int main(void) {
    double array[ROW][COLUMN];

    for (int i = 0; i < ROW; ++i) {
        for (int j = 0; j < COLUMN; ++j) {
            scanf("%lf", &array[i][j]);
        }
    }

    printf("GET AVERAGE IN ARRAY BY ROWS:\n");

    for (int i = 0; i < ROW; ++i) {
        printf("row: %d, average = %.2lf\n", i, get_row_average(ROW, array[i]));
    }

    printf("AVERAGE OFF ALL ARRAY: %.2lf\n", get_arr_average(ROW, COLUMN, array));

    printf("GET MAX VALUE IN ARRAY: %.2lf\n", get_max_val(ROW, COLUMN, array));

    print_arr(ROW, COLUMN, array);

    return 0;
}

double get_row_average(int n, const double arr[n]) {
    double total = 0;
    for (int i = 0; i < n; ++i) {
        total += arr[i];
    }

    return total / n;
}

double get_arr_average(int n, int m, const double arr[n][m]) {
    double total = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            total += arr[i][j];
        }
    }

    return total / (n * m);
}

double get_max_val(int n, int m, const double arr[n][m]) {
    double max_val = *(*arr);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (arr[i][j] > max_val) {
                max_val = arr[i][j];
            }
        }
    }

    return max_val;
}

void print_arr(int n, int m, const double arr[n][m]) {
    printf("PRINT ARRAY:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("array[%d][%d] = %.2lf; ", i, j, arr[i][j]);
        }
        putchar('\n');
    }
}