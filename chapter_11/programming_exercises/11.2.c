#include <stdio.h>
#include <ctype.h>

#define STRING_LEN 10

void read_string(char *str, int n);

int main(void) {

    int n = STRING_LEN;
    char str[n];
    read_string(n, str);

    puts(str);

    return 0;
}

void read_string(char *str, int n) {
    int i = 0;
    fgets(str, n, stdin);

    while (str[i] != '\n' && str[i] != '\0' && !isspace(str[i])) {
        i++;
    }

    if (str[i] == '\n' || isspace(str[i])) {
        str[i] = '\0';
    } else {
        while (getchar() != '\n') {
        }
    }

}

