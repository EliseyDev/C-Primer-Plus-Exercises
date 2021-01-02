/* Write a program that asks the user to enter a height in centimeters and then displays the
height in centimeters and in feet and inches. Fractional centimeters and inches should
be allowed, and the program should allow the user to continue entering heights until a
nonpositive value is entered. A sample run should look like this:
  Enter a height in centimeters:  182
  182.0 cm = 5 feet, 11.7 inches
  Enter a height in centimeters (<=0 to quit):  168.7
  168.0 cm = 5 feet, 6.4
   inches
  Enter a height in centimeters (<=0 to quit):  0
  bye */

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

    printf("Exit program.\n");

    return 0;
}

void printHeight(double height) {
    double foot = height / FOOT_TO_CM;
    double inch = height / INCH_TO_CM;

    printf("%3.2lf cm =  %3.2lf foots, %3.2lf inches\n", height, foot, inch);
}