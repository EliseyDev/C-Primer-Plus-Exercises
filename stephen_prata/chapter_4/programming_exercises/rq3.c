/* 6. What conversion specification would you use to print each of the following?
a. A decimal integer with a field width equal to the number of digits
b. A hexadecimal integer in the form 8A in a field width of 4
c. A floating-point number in the form 232.346 with a field width of 10
d. A floating-point number in the form 2.33e+002 with a field width of 12
e. A string left-justified in a field of width 30 */

#include <stdio.h>

int main(void) {
    const int DECIMAL_VALUE = 10;
    const int HEX_VALUE = 0x8A;
    const float FLOAT_VALUE = 232.346;
    const float FLOAT_EXP_VALUE = 2.33e+002;
    const char STRING_VALUE[5] = {'A', 'B', 'C', 'D', 'E'};

    // a
    printf("%d\n", DECIMAL_VALUE);
    // b
    printf("%4x\n", HEX_VALUE);
    // c
    printf("%10.3f\n", FLOAT_VALUE);
    // d
    printf("%12.2e\n", FLOAT_EXP_VALUE);
    //e
    printf("%-30s", STRING_VALUE);

    return 0;
}
