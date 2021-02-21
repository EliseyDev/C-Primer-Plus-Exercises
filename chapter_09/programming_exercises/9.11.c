/* Write and test a Fibonacci() function that uses a loop instead of recursion to calculate
Fibonacci numbers. */

#include <stdio.h>

unsigned long fibonacci(int);

int main(void) {
    int index = 20;

    printf("The %d index in Fibonacci sequence = %lu\n", index, fibonacci(index));

    return 0;
}

unsigned long fibonacci(int n) {
    if (n == 1) {
        return 0;
    } else if (n < 3) {
        return 1;
    }

    unsigned long fib_result = 1;
    unsigned long prev_number = 1;
    unsigned long buffer = 1;

    for (int i = 4; i <= n; ++i) {
        fib_result += buffer;
        buffer = prev_number;
        prev_number = fib_result;
    }

    return fib_result;
}