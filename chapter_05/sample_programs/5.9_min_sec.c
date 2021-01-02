// min_sec.c - translates seconds to minutes and seconds

#include <stdio.h>

#define SEC_PER_MIN 60

int main(void) {
    int sec, min, left;

    printf("Translate seconds to minutes and seconds!\n");
    printf("Enter value of seconds (<= for exit) :\n");
    scanf("%d", &sec);
    while (sec > 0) {
        min = sec / SEC_PER_MIN;
        left = sec % SEC_PER_MIN;
        printf("%d seconds - %d minute(s) %d second(s).\n", sec, min, left);
        printf("Enter next value (<= 0 for exit) :");
        scanf("%d", &sec);
    }

    printf("Done!\n");

    return 0;
}
