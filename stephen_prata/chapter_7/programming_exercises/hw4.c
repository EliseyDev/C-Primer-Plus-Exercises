#include <stdio.h>

int main(void) {
    char ch;
    int replace_count = 0;

    while ((ch = getchar()) != '#') {
        if (ch == '.') {
            ch = '!';
            ++replace_count;
        } else if (ch == '!') {
            ++replace_count;
            printf("%c", ch);
        }
        printf("%c", ch);
    }
    printf("Количество замен в тексте: %d\n", replace_count);
    printf("Программа завершена.\n");

    return 0;
}
