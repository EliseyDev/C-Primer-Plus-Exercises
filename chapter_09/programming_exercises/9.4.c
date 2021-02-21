/* The harmonic mean of two numbers is obtained by taking the inverses of the two
numbers, averaging them, and taking the inverse of the result. Write a function that
takes two double arguments and returns the harmonic mean of the two numbers. */

#include <stdio.h>

double harmonic_mean(double, double);

int main(void) {
    double f_nun, s_num;

    printf("Enter two number separated by a space to calculate harmonic mean: ");

    while (scanf("%lf%lf", &f_nun, &s_num) != 2) {
        printf("Incorrect input. Please enter two digits, for example - 2 1: ");
        while (getchar() != '\n') {
        }
    }

    printf("Harmonic mean of %.2lf and %.2lf = %.2lf", f_nun, s_num, harmonic_mean(f_nun, s_num));

    return 0;
}

double harmonic_mean(double f_num, double s_num) {
    return 2 / (1 / f_num + 1 / s_num);
}