#include <stdio.h>

int main(void) {
    int userValue;

    printf("Enter any number: ");
    scanf("%d", &userValue);

    for (int i = 0; i < 10; ++i) {
        printf("%d ", userValue++);
    }

    printf("%d \n", userValue);

    printf("Done!\n");

    return 0;
}