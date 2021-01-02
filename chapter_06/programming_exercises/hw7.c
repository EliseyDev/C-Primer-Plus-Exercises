/* Write a program that reads a single word into a character array and then prints the word
backward. Hint: Use  strlen()  ( Chapter   4   ) to compute the index of the last character in
the array. */

#include <stdio.h>
#include <string.h>

const int ARRAY_SIZE = 20;

int main(void) {
    char array[ARRAY_SIZE];

    printf("Enter word: ");
    scanf("%s", array);
    for (int i = strlen(array); i >= 0; --i) {
        printf("%c", array[i]);
    }

    putchar('\n');
    printf("Exit program.\n");

    return 0;
}
