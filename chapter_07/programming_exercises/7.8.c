/* Modify assumption a. in exercise 7 so that the program presents a menu of pay rates
from which to choose. Use a  switch  to select the pay rate. The beginning of a run
should look something like this:
  *****************************************************************
  Enter the number corresponding to the desired pay rate or action:
  1) $8.75/hr                         2) $9.33/hr
  3) $10.00/hr                        4) $11.20/hr
  5) quit
  *****************************************************************
 If choices 1 through 4 are selected, the program should request the hours worked. The
program should recycle until 5 is entered. If something other than choices 1 through 5
is entered, the program should remind the user what the proper choices are and then
recycle. Use  #defined  constants for the various earning rates and tax rates. */

#include <stdio.h>

#define BRAKE1 300
#define BRAKE2 450
#define TAX_RATE_15 .15
#define TAX_RATE_20 .20
#define TAX_RATE_25 .25
#define PAY_RATE1 8.75
#define PAY_RATE2 9.33
#define PAY_RATE3 10.00
#define PAY_RATE4 11.20
#define PAY_RATE_COEFFICIENT 1.5
#define NORMAL_HOURS 40
#define EXIT 5

double get_tax(double sum);

double get_sum(int hours, double pay_rate);

double get_income(double sum, double tax);

void print_menu(void);

int main(void) {
    int choice = 0;
    int hours;
    double sum;
    double tax_sum;
    double income;

    while (choice != EXIT) {
        print_menu();
        scanf("%d", &choice);

        if (choice == EXIT) {
            continue;
        }

        printf("Enter number of hours worked in a week:");
        scanf("%d", &hours);

        switch (choice) {
            case 1: {
                sum = get_sum(hours, PAY_RATE1);
                break;
            }
            case 2: {
                sum = get_sum(hours, PAY_RATE2);
                break;
            }
            case 3: {
                sum = get_sum(hours, PAY_RATE3);
                break;
            }
            case 4: {
                sum = get_sum(hours, PAY_RATE4);
                break;
            }
        }
        tax_sum = get_tax(sum);
        income = get_income(sum, tax_sum);

        printf("Gross pay: %.2lf\n", sum);
        printf("Taxes: %.2lf\n", tax_sum);
        printf("Net pay: %.2lf\n", income);
    }

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

double get_sum(int hours, double pay_rate) {
    double sum;

    if (NORMAL_HOURS >= hours) {
        sum = hours * pay_rate;
    } else {
        sum = NORMAL_HOURS * pay_rate + ((hours - NORMAL_HOURS) * (PAY_RATE_COEFFICIENT * pay_rate));
    }

    return sum;
}

void print_menu() {
    printf("*****************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf(" 1) $8.75/ч             2) $9.33/ч\n");
    printf(" 3) $10.00/ч            4) $11.20/ч\n");
    printf(" 5) quit\n");
    printf("*****************************************************************\n");
}
