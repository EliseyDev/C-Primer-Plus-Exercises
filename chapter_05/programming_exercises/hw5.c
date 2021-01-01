#include <stdio.h>

int main(void) {
    int count = 0, sum = 0;
    int elementPosition;

    printf("Enter a position of element in sequence: ");
    scanf("%d", &elementPosition);

    while (count++ < elementPosition) {
        sum += count;
    }

    printf("sum = %d\n", sum);
    printf("Done!\n");

    return 0;
}