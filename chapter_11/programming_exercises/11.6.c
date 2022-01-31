#include <stdio.h>

int is_within(char *, char);

int main(void) {
    char *str = "Character";
    int is_present = is_within(str, 'r');

    printf("%d", is_present);

    return 0;
}

int is_within(char *str, char ch) {
    if (str == NULL || ch == 0) {
        return 0;
    }

    while (*str != '\0') {
        if (ch == *str) {
            return 1;
        }
        ++str;
    }

    return 0;
}