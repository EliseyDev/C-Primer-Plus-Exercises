/* Write a program that requests a type  double  number and prints the value of the number
cubed. Use a function of your own design to cube the value and print it. The  main()
program should pass the entered value to this function. */

#include <stdio.h>

void cubeValue(double);

int main(void) {
    double value;
    printf("Enter number to get a third power of that number: ");
    scanf("%lf", &value);

    if (value > 0) {
        cubeValue(value);
    }

    printf("Exit program.\n");

    return 0;
}

void cubeValue(double value) {
    double result = value * value * value;
    printf("%.2lf\n", result);
}