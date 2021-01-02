/* Use nested loops to produce the following pattern:
  A
  BC
  DEF
  GHIJ
  KLMNO
  PQRSTU
   If your system doesn’t encode letters in numeric order, see the suggestion in
programming exercise 3. */

#include <stdio.h>

int main(void) {
    char ch;
    int lint_counter;
    for (ch = 'A', lint_counter = 1; ch <= 'U'; ++lint_counter) {
        for (int j = 1; j <= lint_counter; j++, ++ch) {
            printf("%c", ch);
        }
        putchar('\n');
    }

    printf("Exit program.\n");

    return 0;
}