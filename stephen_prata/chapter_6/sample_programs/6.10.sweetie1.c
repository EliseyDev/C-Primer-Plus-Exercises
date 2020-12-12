// sweetie1.c -- cycle with counter
#include <stdio.h>

int main(void) {
    const int NUMBER = 22;
    int count = 1;

    while (count <= NUMBER) {
        printf("Будь моим другом!\n");
        count++;
    }

    return 0;
}