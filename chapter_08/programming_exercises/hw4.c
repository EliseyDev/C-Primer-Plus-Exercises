/* Write a program that reads input as a stream of characters until encountering  EOF . Have
it report the average number of letters per word. Don’t count whitespace as being letters
in a word. Actually, punctuation shouldn’t be counted either, but don’t worry about that
now. (If you do want to worry about it, consider using the  ispunct()  function from the
 ctype.h  family.) */

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;
    int word_count = 0;
    int letter_sum = 0;
    int letter_count = 0;

    while ((ch = getchar()) != EOF) {
        if (letter_count > 0 && isspace(ch)) {
            ++word_count;
            letter_count = 0;
        } else if (!ispunct(ch)) {
            ++letter_count;
            ++letter_sum;
        }
    }
    printf("Average letters in words: %lf\n", (double) letter_sum / word_count);

    printf("Exit program.\n");

    return 0;
}
