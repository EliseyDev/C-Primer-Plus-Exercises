/* skiptwo.c -- skips over first two integers of input */

#include <stdio.h>

#define Q "His Hamlet was funny without being vulgar."

int main(void) {
    int n;

    printf("Please enter three integers:\n");
    scanf("%*d %*d %d", &n);
    printf("The last integer was %d\n", n);

    return 0;
}
