/* Write a program that requests lower and upper integer limits, calculates the sum of all
the integer squares from the square of the lower limit to the square of the upper limit,
and displays the answer. The program should then continue to prompt for limits and
display answers until the user enters an upper limit that is equal to or less than the lower
limit. A sample run should look something like this:
  Enter lower and upper integer limits:  5 9
  The sums of the squares from 25 to 81 is 255
  Enter next set of limits:  3 25
  The sums of the squares from 9 to 625 is 5520
  Enter next set of limits:  5 5
  Done */

#include <stdio.h>

int getSum(int first_number, int second_number);

int getPow(int number);

int main(void) {
    int first_number = 0, second_number = 0;

    printf("Enter lower and upper integer limits: ");
    while (scanf("%d %d", &first_number, &second_number) == 2 && first_number < second_number) {
        printf("Sum of the integer squares from %d up to %d equals %d\n", getPow(first_number), getPow(second_number),
               getSum(first_number, second_number));

        printf("Enter next limits: ");
    }

    printf("Exit program.\n");

    return 0;
}

int getSum(int first_number, int second_number) {
    int pow = 0;

    for (int i = first_number; i <= second_number; ++i) {
        pow += i * i;
    }
    return pow;
}

int getPow(int number) {
    return number * number;
}