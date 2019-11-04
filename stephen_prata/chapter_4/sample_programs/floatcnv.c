/* floatcnv.c -- mismatched floating-point conversions */

#include <stdio.h>

int main(void) {
    float n1 = 3.0;
    double n2 = 3.0;
    long n3 = 987654321;
    long n4 = 123456789;
    
    printf("%.1e %.1e %.1e %.1e\n", n1, n2, n3, n4);
    printf("%ld %ld\n", n3, n4);
    printf("%ld %ld %ld %ld\n", n1, n2, n3, n4);

    return 0;
}