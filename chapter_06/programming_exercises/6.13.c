/* Write a program that creates an eight-element array of  int s and sets the elements to the
first eight powers of 2 and then prints the values. Use a  for  loop to set the values, and,
for variety, use a  do while  loop to display the values. */

#include <stdio.h>

const int ARRAY_SIZE = 8;

int main(void) {
    int array[ARRAY_SIZE];

    int base_degree = 1;
    int degree = 2;
    array[0] = base_degree;

    for (int i = 1; i < ARRAY_SIZE; ++i) {
        base_degree *= degree;
        array[i] = base_degree;
    }

    int counter = 0;
    do {
        printf("2 in pow: %d = %d\n", counter, array[counter]);
        ++counter;
    } while (counter < ARRAY_SIZE);

    printf("Exit program.\n");

    return 0;
}
