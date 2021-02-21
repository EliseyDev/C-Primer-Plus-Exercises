/* Modify exercise 8 so that it uses a function to return the value of the calculation. */

#include <stdio.h>

double calculate_floats(double first, double second);

int main(void) {
    double firstNumber;
    double secondNumber;

    printf("Program produce sum of two float numbers,\n");
    printf("enter two floats separated by space: ");

    while (scanf("%lf %lf", &firstNumber, &secondNumber) == 2) {
        printf("%lf\n", calculate_floats(firstNumber, secondNumber));
    }

    printf("Exit program.\n");

    return 0;
}

double calculate_floats(double first, double second) {
    return (first - second) / (first * second);
}
