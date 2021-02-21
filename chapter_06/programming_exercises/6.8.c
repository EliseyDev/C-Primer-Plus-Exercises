/* Write a program that requests two floating-point numbers and prints the value of their
difference divided by their product. Have the program loop through pairs of input values
until the user enters nonnumeric input. */

#include <stdio.h>

int main(void) {
    double firstNumber;
    double secondNumber;

    printf("Program produce sum of two float numbers,\n");
    printf("enter two floats separated by space: ");

    while (scanf("%lf %lf", &firstNumber, &secondNumber) == 2) {
        printf("%lf \n", (firstNumber - secondNumber) / (firstNumber * secondNumber));
    }

    printf("Exit program.\n");

    return 0;
}