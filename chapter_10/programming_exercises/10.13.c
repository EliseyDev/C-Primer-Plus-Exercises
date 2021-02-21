#include <stdio.h>

#define ROW 3
#define COLUMN 5

double get_row_average(const double arr[], int n);

double get_arr_average(const double arr[][COLUMN], int n, int m);

double get_max_val(const double arr[][COLUMN], int n, int m);

void print_arr(const double arr[][COLUMN], int n, int m);

int main(void) {
    double array[ROW][COLUMN];

    for (int i = 0; i < ROW; ++i) {
        for (int j = 0; j < COLUMN; ++j) {
            scanf("%lf", &array[i][j]);
        }
    }

    printf("GET AVERAGE IN ARRAY BY ROWS:\n");

    for (int i = 0; i < ROW; ++i) {
        printf("row: %d, average = %.2lf\n", i, get_row_average(array[i], ROW));
    }

    printf("AVERAGE OFF ALL ARRAY: %.2lf\n", get_arr_average(array, ROW, COLUMN));

    printf("GET MAX VALUE IN ARRAY: %.2lf\n", get_max_val(array, ROW, COLUMN));

    print_arr(array, ROW, COLUMN);

    return 0;
}

double get_row_average(const double arr[], int n) {
    double total = 0;
    for (int i = 0; i < n; ++i) {
        total += arr[i];
    }

    return total / n;
}

double get_arr_average(const double arr[][COLUMN], int n, int m) {
    double total = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            total += arr[i][j];
        }
    }

    return total / (n * m);
}

double get_max_val(const double arr[][COLUMN], int n, int m) {
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

void print_arr(const double arr[][COLUMN], const int n, const int m) {
    printf("PRINT ARRAY:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("array[%d][%d] = %.2lf; ", i, j, arr[i][j]);
        }
        putchar('\n');
    }
}