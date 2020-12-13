#include <stdio.h>
#include <string.h>

const int ARRAY_SIZE = 20;

int main(void) {
    char array[ARRAY_SIZE];

    printf("Введите слово: ");
    scanf("%s", array);
    for (int i = strlen(array); i >= 0; --i) {
        printf("%c", array[i]);
    }

    return 0;
}
