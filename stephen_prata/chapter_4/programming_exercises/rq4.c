/* 7. Which conversion specification would you use to print each of the following?
a. An unsigned long integer in a field width of 15
b. A hexadecimal integer in the form 0x8a in a field width of 4
c. A floating-point number in the form 2.33E+02 that is left-justified in a field width
of 12
d. A floating-point number in the form +232.346 in a field width of 10
e. The first eight characters of a string in a field eight characters wide */

#include <stdio.h>

int main(void) {
    const unsigned long LONG_VALUE = 0;
    const int HEX_VALUE = 0x8a;
    const float FLOAT_EXP_VALUE = 2.33E+02;
    const float FLOAT_VALUE = 232.346;
    const char STRING_ARRAY[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    // a
    printf("%15lu\n", LONG_VALUE);
    // b
    printf("%#4x\n", HEX_VALUE);
    // c
    printf("%-12.2E\n", FLOAT_EXP_VALUE);
    // d
    printf("%+10.3f\n", FLOAT_VALUE);
    // e
    printf("%8.8s\n", STRING_ARRAY);

    return 0;
}
