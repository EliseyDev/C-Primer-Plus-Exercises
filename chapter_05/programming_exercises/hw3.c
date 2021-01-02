/* Write a program that asks the user to enter the number of days and then converts that
value to weeks and days. For example, it would convert 18 days to 2 weeks, 4 days.
Display results in the following format:
  18 days are 2 weeks, 4 days.
 Use a  while  loop to allow the user to repeatedly enter day values; terminate the loop
when the user enters a nonpositive value, such as  0  or  -20. */

#include <stdio.h>
#include <stdbool.h>

#define DAYS_PER_WEEK 7;

void printDays(int);

int main(void) {

    bool isAlive = true;

    while (isAlive) {
        printf("Enter some number of days to convert (<= 0 exit program): ");

        int days;
        int state = scanf("%d", &days);

        if (state == 0 || days <= 0) {
            isAlive = false;
        } else {
            printDays(days);
        }
    }

    printf("Exit program.\n");

    return 0;
}

void printDays(int days) {

    int weeks = days / DAYS_PER_WEEK;
    int daysResult = days % DAYS_PER_WEEK;

    printf("%d days are %d weeks and %d days.\n", days, weeks, daysResult);
}