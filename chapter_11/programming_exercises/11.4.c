#include <stdio.h>
#include <ctype.h>

#define STRING_LEN 10

void read_word(char *str, int n);

int main(void) {
    char str[STRING_LEN];

    read_word(str, STRING_LEN);

    puts(str);

    return 0;
}

void read_word(char *str, int n) {
    int i = 0;
    char ch;
    int is_space_before = 0;

    while ((ch = getchar()) != EOF && --n >= 0) {
        if (!is_space_before && !isspace(ch)) {
            is_space_before = 1;
        }
        if (!isspace(ch)) {
            str[i++] = ch;
        } else if (is_space_before) {
            str[i] = '\0';
            while (getchar() != '\n');
            break;
        }
    }
}