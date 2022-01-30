#include <stdio.h>

void read_string(int n, char str_array[]);

int main(void) {
    int n = 10;
    char str_array[n];

    read_string(n, str_array);

    fputs(str_array, stdout);

    return 0;
}

void read_string(int n, char str_array[]) {
    fgets(str_array, n, stdin);
}