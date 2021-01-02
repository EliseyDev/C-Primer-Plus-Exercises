/* Redo exercise 4 using a  switch. */

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

    printf("Number of replacements in the text: %d\n", replace_count);
    printf("Exit program.\n");

    return 0;
}
