#include <stdio.h>

const int S_PER_M = 60;
const int S_PER_H = 3600;
const double M_PER_K = 0.62137;

int main(void) {
    double distk, distm;
    double rate;
    int min, sec;
    int time;
    double mtime;
    int mmin, msec;

    printf("Эта программа преобразует время пробега дистанции в метрической системе\n");
    printf("во время пробега одной мили и вычисляет вашу среднюю\n");
    printf("скорость в милях в час.\n");
    printf("Введите дистанцию пробега в километрах.\n");

    scanf("%lf", &distk);

    printf("Введите время в минутах и секундах.\n");
    printf("Начните с ввода минут.\n");

    scanf("%d", &min);
    printf("Теперь введите секунды.\n");
    scanf("%d", &sec);

    time = S_PER_M * min + sec;
    distm = M_PER_K * distk;
    rate = distm / time * S_PER_H;

    mtime = (double) time / distm;
    mmin = (int) mtime / S_PER_M;
    msec = (int) mtime % S_PER_M;

    printf("Вы пробежали %1.2f км (%1.2f мили) за %d мин, %d сек.\n", distk, distm, min, sec);
    printf("Такая скорость соответствует пробегу одной мили за %d мин, ", mmin);
    printf("%d сек.\nВаша средняя скорость составила %1.2f миль в секунду.\n", msec, rate);

    return 0;
}
