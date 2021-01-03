/* Write a program that reads characters from the standard input to end-of-file. For each
character, have the program report whether it is a letter. If it is a letter, also report
its numerical location in the alphabet. For example, c and C would both be letter 3.
Incorporate a function that takes a character as an argument and returns the numerical
location if the character is a letter and that returns  –1  otherwise. */

#include <stdio.h>
#include <ctype.h>

#define LOWER_CASE_RANGE 96
#define UPPER_CASE_RANGE 64

int get_alphabet_index(const char *);

int main(void) {

    char ch;
    int char_index;

    while ((ch = getchar()) != EOF) {
        char_index = get_alphabet_index(&ch);
        if (char_index != -1) {
            printf("%c is letter; alphabet index = %d\n", ch, char_index);
        } else {
            printf("%c is not a letter\n", ch);
        }
    }

    return 0;
}

int get_alphabet_index(const char *ch) {
    if (isalpha(*ch)) {
        return isupper(*ch) ? *ch - UPPER_CASE_RANGE : *ch - LOWER_CASE_RANGE;
    }
    return -1;
}