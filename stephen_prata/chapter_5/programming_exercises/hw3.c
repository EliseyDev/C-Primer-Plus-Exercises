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

    printf("Done!\n");

    return 0;
}

void printDays(int days) {

    int weeks = days / DAYS_PER_WEEK;
    int daysResult = days % DAYS_PER_WEEK;

    printf("%d days are %d weeks and %d days.\n", days, weeks, daysResult);
}