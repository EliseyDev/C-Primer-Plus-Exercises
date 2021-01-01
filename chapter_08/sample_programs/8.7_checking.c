#include <stdio.h>
#include <stdbool.h>

long get_long(void);

bool bad_limits(long begin, long end, long low, long high);

double sum_squares(long a, long b);

int main(void) {
    const long MIN = -10000000L;
    const long MAX = +10000000L;
    long start;
    long stop;
    double answer;

    printf("Эта программа вычисляет сумму квадратов "
           "целых чисел в заданном диапозоне.\nНижняя граница не должна "
           "быть меньше -10000000, \nа вернхняя не должна быть "
           "больше +10000000.\nвведите значения "
           "пределов (для завершения введите 0 для обоих пределов):\n"
           "нижний предел: ");

    start = get_long();
    printf("верхний предел: ");
    stop = get_long();

    while (start != 0 || stop != 0) {
        if (bad_limits(start, stop, MIN, MAX)) {
            printf("Повторите попытку.\n");
        } else {
            answer = sum_squares(start, stop);
            printf("Сумма квадратов целых чисел "
                   "от %ld до %ld равна %g\n", start, stop, answer);
        }
        printf("Введите значения пределов (для завершения "
               "введите 0 для обоих пределов):\n"
               "нижний предел: ");
        start = get_long();
        printf("верхний предел: ");
        stop = get_long();
    }
    printf("Программа завершена.\n");

    return 0;
}

long get_long(void) {
    long input;
    char ch;
    while (scanf("%ld", &input) != 1) {
        while ((ch = getchar()) != '\n') {
            putchar(ch);
        }

        printf(" не является целочисленным.\nВведите "
               "целое число, такое как 25,-178 или 3: ");
    }

    return input;
}

double sum_squares(long a, long b) {
    double total = 0;
    long i;

    for (i = a; i <= b; i++) {
        total += (double) i * (double) i;
    }

    return total;
}

bool bad_limits(long begin, long end, long low, long high) {
    bool not_good = false;

    if (begin > end) {
        printf("%ld е меньше чем %ld.\n", begin, end);
        not_good = true;
    }
    if (begin < low || end < low) {
        printf("Значения должны быть равны %d или больше.\n", low);
        not_good = true;
    }
    if (begin > high || end > high) {
        printf("Значения должны быть равны %d или меньше.\n", high);
        not_good = true;
    }

    return not_good;
}