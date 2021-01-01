#include <stdio.h>

int main(void) {
    for (char ch = 'F'; ch >= 'A'; --ch) {
        for (char ch_inner = 'F'; ch_inner >= ch; --ch_inner) {
            printf("%c", ch_inner);
        }
        printf("\n");
    }

    return 0;
}