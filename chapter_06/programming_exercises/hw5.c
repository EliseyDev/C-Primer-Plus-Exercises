/* Have a program request the user to enter an uppercase letter. Use nested loops to produce
a pyramid pattern like this:
      A
     ABA
    ABCBA
   ABCDCBA
  ABCDEDCBA
 The pattern should extend to the character entered. For example, the preceding pattern
would result from an input value of  E . Hint: Use an outer loop to handle the rows. Use
three inner loops in a row, one to handle the spaces, one for printing letters in ascending
order, and one for printing letters in descending order. If your system doesn’t use ASCII
or a similar system that represents letters in strict number order, see the suggestion in
programming exercise 3. */

#include <stdio.h>

int main(void) {
    char ch = 'E';
    int range;

    printf("Enter letter: ");
    scanf("%c", &ch);

    for (range = ch - 'A'; range >= 0; --range) {
        for (char spaces = range; spaces > 0; --spaces) {
            printf(" ");
        }
        for (char up = 'A'; up < (ch - range) + 1; ++up) {
            printf("%c", up);
        }

        for (char down = ch - range - 1; down >= 'A'; --down) {
            printf("%c", down);
        }
        putchar('\n');
    }

    printf("Exit program.\n");

    return 0;
}
