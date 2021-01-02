/* Write a program that creates an array with 26 elements and stores the 26 lowercase
letters in it. Also have it show the array contents. */

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

    printf("Exit program.\n");

    return 0;
}

