#include <stdio.h>

int main(void) {
    char ch;
    int char_count = 0;

    while ((ch = getchar()) != EOF) {
        switch (ch) {
            case '\n': {
                printf("\\n-%d\n", ch);
                break;
            }
            case '\t': {
                printf("\\t-%d ", ch);
                break;
            }
            default: {
                printf("%c-%d ", ch, ch);
                break;
            }
        }

        if (++char_count >= 10) {
            char_count = 0;
            printf("\n");
        }

    }

    return 0;
}
