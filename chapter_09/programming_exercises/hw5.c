/* Write and test a function called larger_of() that replaces the contents of two double
variables with the maximum of the two values. For example, larger_of(x,y) would
reset both x and y to the larger of the two. */

#include <stdio.h>

void larger_of(double *, double *);

int main(void) {
    double f_num, s_num;
    printf("Enter two digits separated by a space: ");

    while (scanf("%lf%lf", &f_num, &s_num) != 2) {
        printf("Incorrect input. Enter two digits, for example - 2 3: ");
        while (getchar() != '\n');
    }

    printf("Now first number = %.2lf, second number = %.2lf\n", f_num, s_num);
    printf("Calling function\n");
    larger_of(&f_num, &s_num);
    printf("And now first number = %.2lf, second number = %.2lf\n", f_num, s_num);


    return 0;
}

void larger_of(double *f_num, double *s_num) {
    if (*f_num > *s_num) {
        *s_num = *f_num;
    } else {
        *f_num = *s_num;
    }
}