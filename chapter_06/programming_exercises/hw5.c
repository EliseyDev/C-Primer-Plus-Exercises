#include <stdio.h>

int main(void) {
    char ch = 'E';
    int range;

    printf("Введите букву: ");
    scanf("%c", &ch);

    for (range = ch - 'A'; range >= 0; --range) {
        for (char spaces = range; spaces > 0; --spaces) {
            printf(" ");
        }
        for (char up = 'A'; up < (ch - range) + 1; ++up) {
            printf("%c", up);
        }

        for (char down = ch - range - 1; down >= 'A'; --down) {
            printf("%c", down);
        }
        printf("\n");
    }

    return 0;
}
