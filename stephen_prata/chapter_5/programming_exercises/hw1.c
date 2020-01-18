#include <stdio.h>
#include <stdbool.h>

#define MIN_PER_HOUR 60

void printTime(int);

int main(void) {

    bool isAlive = true;

    while (isAlive) {
        printf("Enter time in minutes (<= 0 exit program): ");
        int minutes;
        int state = scanf("%d", &minutes);

        if (state == 0 || minutes <= 0) {
            isAlive = false;
        } else {
            printTime(minutes);
        }
    }

    printf("Done!\n");

    return 0;
}

void printTime(int minutes) {
    int hours = minutes / MIN_PER_HOUR;
    int minutesResult = minutes % MIN_PER_HOUR;

    printf("hours: %d minutes: %d\n", hours, minutesResult);
}

