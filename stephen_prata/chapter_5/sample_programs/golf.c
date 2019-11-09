/* golf.c -- golf tournament scorecard */

#include <stdio.h>

int main(void) {
    int jane, tarzan, cheeta;

    cheeta = tarzan = jane = 68;

    printf("\t\tcheeta\ttarzan\tjane\n");
    printf("First round score %4d %5d %6d\n", cheeta, tarzan, jane);

    return 0;
}
