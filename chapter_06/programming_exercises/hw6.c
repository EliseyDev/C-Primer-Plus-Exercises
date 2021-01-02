/* Write a program that prints a table with each line giving an integer, its square, and its
cube. Ask the user to input the lower and upper limits for the table. Use a  for  loop. */

#include <stdio.h>

const int ARRAY_SIZE = 2;

int get_number_in_power(int number, int pow);

int main(void) {
    int bounds[ARRAY_SIZE];

    printf("Program calc square and cubes,\n");
    printf("Enter lower and upper limits: ");

    for (int i = 0; i < ARRAY_SIZE; ++i) {
        scanf("%d", &bounds[i]);
    }

    printf("number | pow 2 | pow 3\n");
    for (int i = bounds[0]; i <= bounds[1]; ++i) {
        printf("%5d %6d %7d\n", i, get_number_in_power(i, 2), get_number_in_power(i, 3));
    }

    putchar('\n');
    printf("Exit program.\n");

    return 0;
}

int get_number_in_power(int number, int pow) {
    int value = number;
    for (int i = 1; i < pow; ++i) {
        value *= number;
    }

    return value;
}
