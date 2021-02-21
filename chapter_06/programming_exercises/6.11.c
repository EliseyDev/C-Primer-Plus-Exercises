/* Write a program that reads eight integers into an array and then prints them in reverse
order. */

#include <stdio.h>

const int ARRAY_SIZE = 8;

int main() {
    int array[ARRAY_SIZE];
    printf("Enter 8 numbers. Program will reverse them: ");

    for (int i = 0; i < ARRAY_SIZE; ++i) {
        scanf("%d", &array[i]);
    }

    for (int i = ARRAY_SIZE - 1; i >= 0; --i) {
        printf("%d", array[i]);
    }

    putchar('\n');
    printf("Exit program.\n");

    return 0;
}