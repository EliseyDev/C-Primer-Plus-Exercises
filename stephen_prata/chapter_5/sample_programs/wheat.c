/* wheat.c -- exponential growth */

#include <stdio.h>
#define SQUARES 64
#define CROP 2E16

int main(void) {
    double current, total;
    int count = 1;    

    printf("square    grains      total     fraction of\n");
    printf("          added       grains    world total\n");

    // start with one grain
    total = current = 1.0;
    printf("%4d %13.2e %11.2e %9.2e\n", count, current, total, total/CROP);
    while(count < SQUARES) {
        count++;
        current *= 2.0;
        total +=current;
        printf("%4d %13.2e %11.2e %9.2e\n", count, current, total, total/CROP);
    }
    printf("That's all.\n");

    return 0;
}
