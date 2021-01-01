#include <stdio.h>
#include <stdbool.h>

#define FOOT_TO_CM 30.48
#define INCH_TO_CM 2.54

void printHeight(double);

int main(void) {

    bool isAlive = true;

    while (isAlive) {
        printf("Enter height in cm (<= 0 exit program): ");

        double height;
        int state = scanf("%lf", &height);

        if (state == 0 || height <= 0) {
            isAlive = false;
        } else {
            printHeight(height);
        }
    }

    printf("Done!\n");

    return 0;
}

void printHeight(double height) {
    double foot = height / FOOT_TO_CM;
    double inch = height / INCH_TO_CM;

    printf("%3.2lf cm =  %3.2lf foots, %3.2lf inches\n", height, foot, inch);
}