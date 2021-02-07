/*  fgets1.c  -- using fgets() and fputs() */

#include <stdio.h>

#define STLEN 15

int main(void) {
    char words[STLEN];

    puts("Enter a string, please.");
    fgets(words, STLEN, stdin);

    printf("Your string twice (puts(), then fputs()):\n");
    puts(words);
    fputs(words, stdout);

    printf("Enter another string, please.");
    fgets(words, STLEN, stdin);

    printf("Your string twice (puts(), then fputs()):\n");
    puts(words);
    fputs(words, stdout);

    puts("Done.");

    return 0;
}
