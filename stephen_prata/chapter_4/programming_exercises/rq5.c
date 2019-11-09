/* 8. What conversion specification would you use to print each of the following?
a. A decimal integer having a minimum of four digits in a field width of 6
b. An octal integer in a field whose width will be given in the argument list
c. A character in a field width of 2
d. A floating-point number in the form +3.13 in a field width equal to the number of
characters in the number
e. The first five characters in a string left-justified in a field of width 7 */

#include <stdio.h>

int main(void) {
    const int INT_VALUE = 1534;    
    const char CHAR_VALUE = 'A';
    const float FLOAT_VALUE = 3.13;
    const char STRING_ARRAY[8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    int width;

    // a
    printf("%6.4d\n", int_value);
    // b
    printf("Enter width for question b: \n");
    scanf("%d", &width);
    printf("%*o\n", width, INT_VALUE);
    // c    
    printf("%2c\n", CHAR_VALUE);
    // d
    printf("%+1.2f\n", FLOAT_VALUE);
    // e
    printf("%-7.5s\n", STRING_ARRAY);

    return 0;
}
