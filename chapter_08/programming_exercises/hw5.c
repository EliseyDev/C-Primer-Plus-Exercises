/* Modify the guessing program of  Listing   8.4    so that it uses a more intelligent guessing
strategy. For example, have the program initially guess 50, and have it ask the user
whether the guess is high, low, or correct. If, say, the guess is low, have the next guess
be halfway between 50 and 100, that is, 75. If that guess is high, let the next guess be
halfway between 75 and 50, and so on. Using this  binary search  strategy, the program
quickly zeros in on the correct answer, at least if the user does not cheat. */

#include <stdio.h>

#define YES 'y'
#define NO 'n'
#define GREATER 'g'
#define LESS 'l'

void clean_buffer(void);

int main(void) {
    int left = 50;
    int right = 0;
    int mid = (left + right) / 2;
    char response;

    printf("Choose positive integer from 1 to 50. I try to guess it.\n");
    printf("Enter y, if my guess is correct and \nn if not\n");
    printf("Your number is %d?\n", mid);

    while ((response = getchar()) != YES) {

        if (response == NO) {
            printf("Ok, This number is greater than %d?\n", mid);
            printf("Enter g if greater amd l if less\n");
            clean_buffer();


            while ((response = getchar()) != LESS && response != GREATER) {
                printf("Correct values are 'g' or 'l'.\n");
                clean_buffer();
            }

            if (response == GREATER) {
                right = mid - 1;

            } else {
                left = mid + 1;
            }

            mid = (left + right) / 2;
        } else {
            printf("Correct values are 'y' or 'n'.\n");
        }
        while (getchar() != '\n') {
            continue;
        }
        printf("Your number is %d?\n", mid);
    }

    printf("I knew i could guess!\n");

    printf("Exit program.\n");

    return 0;
}

void clean_buffer(void) {
    while (getchar() != '\n');
}