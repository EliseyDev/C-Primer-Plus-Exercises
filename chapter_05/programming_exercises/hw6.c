/* Now modify the program of Programming Exercise 5 so that it computes the sum of the
squares of the integers. (If you prefer, how much money you receive if you get $1 the
first day, $4 the second day, $9 the third day, and so on. This looks like a much better
deal!) C doesn’t have a squaring function, but you can use the fact that the square of  n  is
 n * n. */

#include <stdio.h>

int main(void) {
    int count = 0, sum = 0;
    int elementPosition;

    printf("Enter a position of element in sequence: ");
    scanf("%d", &elementPosition);

    while (count++ < elementPosition) {
        sum += count * count;
    }

    printf("sum = %d\n", sum);
    printf("Exit program.\n");

    return 0;
}