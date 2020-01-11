/* intconv.c -- some mismatched integer conversions */

#include <stdio.h>

#define PAGES 336
#define WORDS 65618

int main(void) {

    short num = PAGES;
    short mnum = -PAGES;

    char x = 'P';

    printf("num as short and unsigned short:   %hd %hu\n",
           num, num);
    printf("-num as short and unsigned short:  %hd %hu\n",
           mnum, mnum);
    printf("num as int and char: %d %c %d\n", num, num, x);

    printf("WORDS as int, short, and char: %d %hd %c\n",
           WORDS, WORDS, WORDS);

    return 0;
}
