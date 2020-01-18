#include <stdio.h>

void cubeValue(double);

int main(void) {
    double value;
    printf("Enter number to get a third power of that number: ");
    scanf("%lf", &value);

    if (value > 0) {
        cubeValue(value);
    }

    printf("Done!\n");

    return 0;
}

void cubeValue(double value) {
    double result = value * value * value;
    printf("%.2lf\n", result);
}