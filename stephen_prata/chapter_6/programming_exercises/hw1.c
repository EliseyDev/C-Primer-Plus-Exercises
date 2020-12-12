#include "stdio.h"

const int ARRAY_SIZE = 26;

int main() {
    char array[ARRAY_SIZE];

    int i;
    char ch;

    for (ch = 'A', i = 0; i < ARRAY_SIZE; ch++, i++) {
        array[i] = ch;
    }


    for (i = 0; i < ARRAY_SIZE; i++) {
        printf("%d: %c\n", i, array[i]);
    }

    return 0;
}

