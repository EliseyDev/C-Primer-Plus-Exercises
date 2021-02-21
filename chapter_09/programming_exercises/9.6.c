/* Write and test a function that takes the addresses of three double variables as arguments
and that moves the value of the smallest variable into the first variable, the middle value
to the second variable, and the largest value into the third variable. */

#include <stdio.h>

void sort(double *, double *, double *);

int main(void) {
    double f_num;
    double s_num;
    double t_num;

    printf("This program sort 3 digits. Enter them separated by a space: ");

    while (scanf("%lf%lf%lf", &f_num, &s_num, &t_num) != 3) {
        printf("Incorrect input. Enter 3 digit separated by a space, for example 7 6 5: ");

        while (getchar() != '\n');
    }

    sort(&f_num, &s_num, &t_num);

    printf("After sorting: small = %.2lf, middle = %.2lf, greater = %.2lf\n", f_num, s_num, t_num);
    printf("Exit program\n");

    return 0;
}

void sort(double *f_num, double *s_num, double *t_num) {
    double small, middle, greater;

    if (*f_num < *t_num) {
        small = *f_num < *s_num ? *f_num : (*s_num < *t_num ? *s_num : *t_num);
        middle = *s_num < *t_num ? *s_num : *t_num;
        greater = *s_num > *t_num ? *s_num : *t_num;
    } else {
        small = *f_num < *s_num ? *t_num : (*s_num < *t_num ? *s_num : *t_num);
        middle = *f_num < *s_num ? *f_num : *s_num;
        greater = *f_num > *s_num ? *f_num : *s_num;
    }

    *f_num = small;
    *s_num = middle;
    *t_num = greater;
}