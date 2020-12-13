#include <stdio.h>

const double EIGHT_PERCENT = .08;
const double ONE_HUNDRED = 100000;

int main(void) {

    double cache = 1000000;
    int years;
    double percent_per_year;

    for (years = 1; cache >= 100000; ++years) {
        percent_per_year = cache * EIGHT_PERCENT;
        cache += percent_per_year;
        cache -= ONE_HUNDRED;
    }

    printf("Необходимо %d лет, чтобы на счету не осталось денег", years);

    return 0;
}
