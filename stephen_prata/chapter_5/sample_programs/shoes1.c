/* shoes1.c -- converts a shoe size to inches */

#include <stdio.h>
// one kind of symbolic constant
#define ADJUST 7.31

int main(void) {
	// another kind of symbolic constant
    const double SCALE = 0.333;
    double shoe, foor;

    shoe = 9.0;
    foot = SCALE * shoe + ADJUST;

    printf("Shoe size (men's)      foot lenght\n");
    printf("%10.1f %15.2f inches\n", shoe, foot);

    return 0;
}
