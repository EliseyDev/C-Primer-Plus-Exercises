/* Write a program that accepts a positive integer as input and then displays all the prime
numbers smaller than or equal to that number. */

#include <stdio.h>
#include <stdbool.h>

bool getIsPrime(unsigned long num);

int main(void) {
    unsigned long num;

    bool isPrime;

    printf("Enter positive integer (or quit - q.)\n");

    scanf("%lu", &num);

    unsigned long count;
    for (count = 2; count <= num; ++count) {
        isPrime = getIsPrime(count);
        if (isPrime) {
            count > 2 ? printf(", ") : printf("");
            printf("%lu", count);
        }
    }

    putchar('\n');
    printf("Exit program.\n");

    return 0;
}

bool getIsPrime(unsigned long num) {
    unsigned long div;
    bool isPrime;

    for (div = 2, isPrime = true; (div * div) <= num; div++) {
        if (num % div == 0) {
            isPrime = false;
        }
    }

    return isPrime;
}