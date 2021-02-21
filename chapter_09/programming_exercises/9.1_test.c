/* Devise a function called  min(x,y)  that returns the smaller of two  double  values. Test
the function with a simple driver. */

#include <stdio.h>
#include "9.1_lib.h"

int main(void) {
    double f_num;
    double s_num;

    printf("Enter two number to get min of them: ");

    scanf("%lf%lf", &f_num, &s_num);

    printf("minimum of %.2lf and %.2lf is %.2lf", f_num, s_num, get_min(&f_num, &s_num));

    return 0;
}


