/* Write a program that reads input as a stream of characters until encountering  EOF .
Have it report the number of uppercase letters, the number of lowercase letters, and the
number of other characters in the input. You may assume that the numeric values for the
lowercase letters are sequential and assume the same for uppercase. Or, more portably,
you can use appropriate classification functions from the  ctype.h  library. */

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;
    int upper_letter_count = 0;
    int lower_letter_count = 0;
    int symbols_count = 0;

    while ((ch = getchar()) != EOF) {
        if (islower(ch)) {
            ++lower_letter_count;
            continue;
        } else if (isupper(ch)) {
            ++upper_letter_count;
            continue;
        } else {
            ++symbols_count;
        }
    }

    printf("Number of characters:\nUppercase: %d\nLowercase: %d\nOther characters: %d\n",
           upper_letter_count, lower_letter_count, symbols_count);

    printf("Exit program.\n");

    return 0;
}
