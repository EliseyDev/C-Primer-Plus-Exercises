#include <stdio.h>

int main(void) {
    char ch;
    int replace_count = 0;

    while ((ch = getchar()) != '#') {
        switch (ch) {
            case '.': {
                ch = '!';
                ++replace_count;
                break;
            }
            case '!': {
                printf("!");
                ++replace_count;
                break;
            }
        }
        printf("%c", ch);
    }

    printf("Количество замен в тексте: %d\n", replace_count);
    printf("Программа завершена.\n");

    return 0;
}
