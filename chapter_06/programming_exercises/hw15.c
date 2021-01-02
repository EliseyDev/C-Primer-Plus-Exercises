/* Write a program that reads in a line of input and then prints the line in reverse order.
You can store the input in an array of  char ; assume that the line is no longer than 255
characters. Recall that you can use  scanf()  with the  %c  specifier to read a character at
a time from input and that the newline character ( \n ) is generated when you press the
Enter key. */

#include <stdio.h>

const int ARRAY_SIZE = 255;

int main() {
    char array[ARRAY_SIZE];

    printf("Program reverse string. Enter string: ");
    int counter = 0;
    do {
        scanf("%c", &array[counter]);
        counter++;
    } while (array[counter - 1] != '\n');

    for (int i = counter; i >= 0; --i) {
        printf("%c", array[i]);
    }

    putchar('\n');
    printf("Exit program.\n");

    return 0;
}
