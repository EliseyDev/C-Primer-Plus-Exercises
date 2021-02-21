/* Consider these two infinite series:
  1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ...
  1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...
 Write a program that evaluates running totals of these two series up to some limit of
number of terms. Hint: –1 times itself an odd number of times is –1, and –1 times itself
an even number of times is 1. Have the user enter the limit interactively; let a zero or
negative value terminate input. Look at the running totals after 100 terms, 1000 terms,
10,000 terms. Does either series appear to be converging to some value? */

#include <stdio.h>

const int ONE = 1;

int main(void) {
    int max;
    printf("Enter limit of sequence: ");
    scanf("%d", &max);

    double first_seq = 1.0;
    double second_seq = 1.0;

    for (int i = 2; i <= max; ++i) {
        first_seq += (double) ONE / i;

        if (i % 2 == 0) {
            second_seq -= (double) ONE / i;
        } else {
            second_seq += (double) ONE / i;
        }
    }

    printf("%lf %lf\n", first_seq, second_seq);
    printf("Exit program.\n");

    return 0;
}
