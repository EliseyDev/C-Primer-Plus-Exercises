/* Change the program  addemup.c  ( Listing   5.13   ), which found the sum of the first 20
integers. (If you prefer, you can think of  addemup.c  as a program that calculates how
much money you get in 20 days if you receive $1 the first day, $2 the second day, $3 the
third day, and so on.) Modify the program so that you can tell it interactively how far
the calculation should proceed. That is, replace the  20  with a variable that is read in. */

#include <stdio.h>

int main(void) {
    int count = 0, sum = 0;
    int elementPosition;

    printf("Enter a position of element in sequence: ");
    scanf("%d", &elementPosition);

    while (count++ < elementPosition) {
        sum += count;
    }

    printf("sum = %d\n", sum);
    printf("Exit program.\n");

    return 0;
}