/* Write a program that creates two eight-element arrays of  double s and uses a loop to let
the user enter values for the eight elements of the first array. Have the program set the
elements of the second array to the cumulative totals of the elements of the first array.
For example, the fourth element of the second array should equal the sum of the first
four elements of the first array, and the fifth element of the second array should equal
the sum of the first five elements of the first array. (It’s possible to do this with nested
loops,  but by using the fact that the fifth element of the second array equals the fourth
element of the second array plus the fifth element of the first array, you can avoid
nesting and just use a single loop for this task.) Finally, use loops to display the contents
of the two arrays, with the first array displayed on one line and with each element of the
second array displayed below the corresponding element of the first array. */

#include <stdio.h>

const int ARRAY_SIZE = 8;

int main(void) {

    int array[ARRAY_SIZE];
    int sum_array[ARRAY_SIZE];

    int accumulator = 0;

    printf("Enter 8 numbers to calc their sum: ");

    for (int i = 0; i < ARRAY_SIZE; ++i) {
        scanf("%d", &array[i]);
        accumulator += array[i];
        sum_array[i] = accumulator;
    }

    for (int i = 0; i < ARRAY_SIZE; ++i) {
        printf("%4d", array[i]);
    }

    putchar('\n');

    for (int i = 0; i < ARRAY_SIZE; ++i) {
        printf("%4d", sum_array[i]);
    }

    printf("Exit program.\n");

    return 0;
}
