/* Write a program that requests the hours worked in a week and then prints the gross pay,
the taxes, and the net pay. Assume the following:
     a.    Basic pay rate = $10.00/hr
     b.    Overtime (in excess of 40 hours) = time and a half
     c.    Tax rate: #15% of the first $300
 20% of the next $150
 25% of the rest
 Use  #define  constants, and don’t worry if the example does not conform to current
tax law. */

#include <stdio.h>

#define BRAKE1 300
#define BRAKE2 450
#define TAX_RATE_15 .15
#define TAX_RATE_20 .20
#define TAX_RATE_25 .25
#define PAY_RATE 10
#define PAY_RATE_COEFFICIENT (PAY_RATE * 1.5)
#define NORMAL_HOURS 40

double get_tax(double sum);

double get_sum(int hours);

double get_income(double sum, double tax);

int main(void) {
    int hours;
    double sum;
    double tax_sum;
    double income;

    printf("Enter number of hours worked in a week: ");
    scanf("%d", &hours);

    sum = get_sum(hours);
    tax_sum = get_tax(sum);
    income = get_income(sum, tax_sum);

    printf("Gross pay: %.2lf\n", sum);
    printf("Taxes: %.2lf\n", tax_sum);
    printf("Net pay: %.2lf\n", income);

    printf("Exit program.\n");

    return 0;
}

double get_tax(double sum) {
    double tax_sum;

    if (BRAKE1 >= sum) {
        tax_sum = sum * TAX_RATE_15;
    } else if (BRAKE2 >= sum) {
        tax_sum = BRAKE1 * TAX_RATE_15 + (sum - BRAKE1) * TAX_RATE_20;
    } else {
        tax_sum = BRAKE1 * TAX_RATE_15 + (BRAKE2 - BRAKE1) * TAX_RATE_20 + (sum - BRAKE2) * TAX_RATE_25;
    }

    return tax_sum;
}

double get_income(double sum, double tax) {
    return sum - tax;
}

double get_sum(int hours) {
    double sum;

    if (NORMAL_HOURS >= hours) {
        sum = hours * PAY_RATE;
    } else {
        sum = NORMAL_HOURS * PAY_RATE + ((hours - NORMAL_HOURS) * PAY_RATE_COEFFICIENT);
    }

    return sum;
}