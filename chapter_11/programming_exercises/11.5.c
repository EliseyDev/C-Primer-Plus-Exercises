#include <stdio.h>

char *strchr(char *, char);

int main(void) {
    char *string = "Character address";
    char *ch = strchr(string, 's');

    printf("%c", *(ch));

    return 0;
}

char *strchr(char *str, char ch) {
    if (str == NULL || ch == 0) {
        return 0;
    }
    while (*str != '\0') {
        if (ch == *str) {
            return str;
        }
        ++str;
    }
    return 0;
}