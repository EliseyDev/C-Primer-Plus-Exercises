#include <stdio.h>

const int ONE = 1;

int main(void) {
    int max;
    printf("Введите номер элемента для подсчета суммы последовательностей: ");
    scanf("%d", &max);

    double first_seq = 1.0;
    double second_seq = 1.0;

    for (int i = 2; i <= max; ++i) {
        first_seq += (double) ONE / i;

        if (i % 2 == 0) {
            second_seq -= (double) ONE / i;
        } else {
            second_seq += (double) ONE / i;
        }
    }

    printf("%lf %lf\n", first_seq, second_seq);

    return 0;
}
