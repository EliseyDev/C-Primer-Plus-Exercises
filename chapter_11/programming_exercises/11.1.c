#include <stdio.h>

#define STRING_LEN 10

void read_string(char *str, int n);

int main(void) {
    int n = STRING_LEN;
    char str[n];

    read_string(n, str);

    fputs(str, stdout);

    return 0;
}

void read_string(char *str, int n) {
    fgets(str, STRING_LEN, stdin);
}