#include <stdio.h>

int main(void) {
    int ch;
    int counter = 0;

    while ((ch = getchar()) != '#') {
        if (ch == '\n') {
            continue;
        }
        printf("%c-%d ", ch, ch);

        if (++counter % 8 == 0) {
            printf("\n");
            counter = 0;
        }

    }
    printf("\nПрограмма завершена.\n");


    return 0;
}
