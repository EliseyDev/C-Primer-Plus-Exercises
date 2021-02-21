/* Redo Programming Exercise 8, but this time use a recursive function. */

#include <stdio.h>
#include <stdlib.h>

double power(double n, int p);

int main(void) {
    double x, xpow;
    int exp;

    printf("Enter a number and the positive integer power");
    printf(" to which\nthe number will be raised. Enter q");
    printf(" to quit.\n");

    while (scanf("%lf%d", &x, &exp) == 2) {
        xpow = power(x, exp);

        printf("%.3g to the power %d is %.5lf\n", x, exp, xpow);
        printf("Enter next pair of numbers or q to quit.\n");
    }
    printf("Hope you enjoyed this power trip -- bye!\n");

    return 0;
}

double power(double n, int p) {
    int exp = abs(p);

    if (n == 0 && p != 0) {
        return 0;
    } else if (n == 0 && p == 0) {
        printf("0 in power of 0 is undefined, result = 1\n");
        return 1;
    }

    if (exp == 1) {
        return n;
    }

    double pow = n;

    pow *= power(n, exp - 1);

    if (p > 0) {
        return pow;
    } else {
        return 1 / pow;
    }
}