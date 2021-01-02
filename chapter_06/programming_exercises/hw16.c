/* Daphne invests $100 at 10% simple interest. (That is, every year, the investment earns
an interest equal to 10% of the original investment.) Deirdre invests $100 at 5% interest
compounded annually. (That is, interest is 5% of the current balance, including previous
addition of interest.) Write a program that finds how many years it takes for the value
of Deirdre’s investment to exceed the value of Daphne’s investment. Also show the two
values at that time. */

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

    printf("%d year(s) is required for Deirdre wallet exceeds Daphne's wallet\n", years);
    printf("State of the account above %d year(s):\nDaphne: %.2lf\nDeirdre: %.2lf\n", years, dafna_deposit,
           deydra_deposit);

    printf("Exit program.\n");

    return 0;
}
