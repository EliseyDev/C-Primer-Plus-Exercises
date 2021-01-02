/* Write a program that reads input up to  #  and reports the number of times that the
sequence  ei  occurs. */

#include <stdio.h>

int main(void) {
    char current;
    char previous = -1;
    int sequence_count = 0;

    while ((current = getchar()) != '#') {
        if (previous == 'e' && current == 'i') {
            ++sequence_count;
        }
        previous = current;
    }

    printf("Times of occur ""ei"": %d\n", sequence_count);
    printf("Exit program.\n");

    return 0;
}
