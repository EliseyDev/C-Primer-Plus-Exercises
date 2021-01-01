// power.c -- powers whole numbers
#include <stdio.h>

double power(double n, int p);

int main(void) {
    double x, xpow;
    int exp;

    printf("Введите число и положительную степень, в которую\n");
    printf("число будет возведено. Для завершения программы введите q.\n");

    while (scanf("%lf%d", &x, &exp) == 2) {
        xpow = power(x, exp);

        printf("%.3g в степени %d равно %.5g\n", x, exp, xpow);
        printf("Введите следующую пару чисел или q для завершения.\n");
    }
    printf("Надеемся, что вы оценили это упражнение -- до свидания!\n");

    return 0;
}

double power(double n, int p) {
    double pow = 1;
    int i;

    for (i = 1; i <= p; i++) {
        pow *= n;
    }
    return pow;
}