/* Devise a program that counts the number of characters in its input up to the end of file. */

#include <stdio.h>

int main(void) {
    int char_counter = 0;

    while (getchar() != EOF) {
        ++char_counter;
    }

    printf("Number of characters in file: %d\n", char_counter);

    printf("Exit program.\n");

    return 0;
}
