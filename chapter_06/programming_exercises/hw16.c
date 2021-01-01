#include <stdio.h>

const double FIVE_PERCENT = .05;
const double TEN_PERCENT = .10;

int main() {
    double dafna_deposit = 100000;
    double deydra_deposit = 100000;

    const int ten_thousand = 10000;
    int years;

    for (years = 1; deydra_deposit <= dafna_deposit; ++years) {
        dafna_deposit += ten_thousand;
        deydra_deposit += deydra_deposit * FIVE_PERCENT;
    }

    printf("Необходимо %d лет чтобы сумма на счету Дейдры превысила сумму счета Дафны\n", years);
    printf("Состояние счетов за %d лет:\nДафна: %.2lf\nДейдра: %.2lf", years, dafna_deposit, deydra_deposit);

    return 0;
}
