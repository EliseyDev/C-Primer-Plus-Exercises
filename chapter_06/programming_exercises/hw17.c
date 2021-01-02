/* Chuckie Lucky won a million dollars (after taxes), which he places in an account that
earns 8% a year. On the last day of each year, Chuckie withdraws $100,000. Write a
program that finds out how many years it takes for Chuckie to empty his account. */

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

    printf("Requires %d years for deposit is being empty\n", years);
    printf("Exit program.\n");

    return 0;
}
