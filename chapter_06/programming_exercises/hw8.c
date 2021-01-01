#include <stdio.h>

int main(void) {
    double firstNumber;
    double secondNumber;

    printf("Program produce sum of two float numbers,\n");
    printf("enter two floats separated by space: ");

    while (scanf("%lf %lf", &firstNumber, &secondNumber) == 2) {
        printf("%lf \n", (firstNumber - secondNumber) / (firstNumber * secondNumber));
    }

    return 0;
}