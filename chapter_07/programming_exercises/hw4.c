/* Using  if else  statements, write a program that reads input up to  # , replaces each period
with an exclamation mark, replaces each exclamation mark initially present with two
exclamation marks, and reports at the end the number of substitutions it has made. */

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
    printf("Number of replacements in the text: %d\n", replace_count);
    printf("Exit program.\n");

    return 0;
}
