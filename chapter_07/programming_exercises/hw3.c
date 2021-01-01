#include <stdio.h>

double get_average(int count, double sum);

int main(void) {
    long number;
    int even_count = 0;
    int odd_count = 0;
    double even_sum = 0;
    double odd_sum = 0;

    while (scanf("%ld", &number) == 1 && number != 0) {
        if (number % 2 == 0) {
            even_sum += number;
            ++even_count;
        } else {
            odd_sum += number;
            ++odd_count;
        }
    }

    printf("Общее количество четных чисел: %d, средне-арифметическое: %.2lf\n", even_count,
           get_average(even_count, even_sum));
    printf("Общее количество нечетных чисел: %d, средне-арифметическое: %.2lf\n", odd_count,
           get_average(odd_count, odd_sum));
    printf("Программа завершена\n");

    return 0;
}

double get_average(int count, double sum) {
    if (sum == 0) {
        return 0;
    } else {
        return sum / count;
    }
}
