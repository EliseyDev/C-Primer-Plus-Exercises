#include <stdio.h>

#define SIZE 4

void sum_array(const int source_f[], const int source_s[], int target[], int n, int m, int s);

void print_arr(const int arr[], int n);

int main(void) {
    int source_f[SIZE] = {2, 4, 5, 8};
    int source_s[SIZE] = {1, 0, 4, 6};
    int target[SIZE];

    sum_array(source_f, source_s, target, SIZE, SIZE, SIZE);
    print_arr(target, SIZE);

    return 0;
}

void sum_array(const int source_f[], const int source_s[], int target[], int n, int m, int s) {
    for (int i = 0; i < s; ++i) {
        if (i < n) {
            target[i] = source_f[i];
        }
        if (i < m) {
            target[i] += source_s[i];
        }
    }
}

void print_arr(const int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}