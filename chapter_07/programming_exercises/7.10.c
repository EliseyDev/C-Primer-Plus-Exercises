/* The 1988 United States Federal Tax Schedule was the simplest in recent times. It had
four categories, and each category had two rates. Here is a summary (dollar amounts are
taxable income):
  Category      Tax
 Single    15% of first $17,850 plus 28% of excess
 Head of Household    15% of first $23,900 plus 28% of excess
 Married, Joint    15% of first $29,750 plus 28% of excess
 Married, Separate    15% of first $14,875 plus 28% of excess
 For example, a single wage earner with a taxable income of $20,000 owes 0.15 × $17,850
+ 0.28 × ($20,000−$17,850). Write a program that lets the user specify the tax category
and the taxable income and that then calculates the tax. Use a loop so that the user can
enter several tax cases. */

#include <stdio.h>

#define BASE_TAX1 .15
#define BASE_TAX2 .28
#define SINGLE 17850
#define FAMILY_HEAD 23900
#define COMMON_HOUSEHOLD 29750
#define SEPARATE_HOUSEHOLD 14875

#define SINGLE_CATEGORY 1
#define FAMILY_HEAD_CATEGORY 2
#define COMMON_HOUSEHOLD_CATEGORY 3
#define SEPARATE_HOUSEHOLD_CATEGORY 4

#define ATTEMPTS 3
#define EXIT 5

#define SYMBOL '-'
#define BAR_SIZE 74

void print_bar(char symbol, int size);

void print_menu(void);

void clear_buffer(void);

double count_tax(int category, double sum);

int main(void) {
    int category;
    double sum;
    int attempt;

    do {
        print_menu();

        while ((scanf("%d", &category) != 1) || (category < 1 || category > 5)) {
            printf("Incorrect value. Enter 1-4 or 5 - quit.\n");
            clear_buffer();
        }

        if (category == EXIT) {
            break;
        }

        printf("Enter income to calc a tax: ");
        attempt = ATTEMPTS;
        while (attempt >= 0 && (scanf("%lf", &sum) != 1)) {
            printf("Incorrect value. Enter 0-9.\n");
            if (attempt > 0) {
                printf("Attempts left: %d\n", attempt--);
            } else {
                printf("Attempts are over.\n");
                --attempt;
            }

            clear_buffer();
        };

        printf("Tax sum = $%.2lf\n\n", count_tax(category, sum));
    } while (category != EXIT);

    printf("Exit program.\n");

    return 0;
}


void print_menu(void) {
    printf("Enter the number corresponding to the desired tariff plan:\n");
    print_bar(SYMBOL, BAR_SIZE);
    printf("Category                           Tax\n");
    print_bar(SYMBOL, BAR_SIZE);
    printf("1) Single                          15%% of first $17,850 plus 28%%  of excess\n\n");
    printf("2) Head of Household               15%% of first $23 900 plus 28%%  of excess\n\n");
    printf("3) Married, Joint                  15%% of first $29 750 plus 28%%  of excess\n\n");
    printf("4) Married, Separate               15%% of first $14 875 plus 28%%  of excess\n\n");
    printf("5) Выход\n");
    print_bar(SYMBOL, BAR_SIZE);
}

void print_bar(char symbol, int size) {
    for (int i = 0; i < size; ++i) {
        putchar(symbol);
    }
    putchar('\n');
}

void clear_buffer(void) {
    while ((getchar()) != '\n');
}

double count_tax(int category, double sum) {
    double tax;
    switch (category) {
        case SINGLE_CATEGORY: {
            tax = BASE_TAX1 * SINGLE + BASE_TAX2 * (sum - SINGLE);
            break;
        }
        case FAMILY_HEAD_CATEGORY: {
            tax = BASE_TAX1 * FAMILY_HEAD + BASE_TAX2 * (sum - FAMILY_HEAD);
            break;

        }
        case COMMON_HOUSEHOLD_CATEGORY: {
            tax = BASE_TAX1 * COMMON_HOUSEHOLD + BASE_TAX2 * (sum - COMMON_HOUSEHOLD);
            break;
        }
        case SEPARATE_HOUSEHOLD_CATEGORY: {
            tax = BASE_TAX1 * SEPARATE_HOUSEHOLD + BASE_TAX2 * (sum - SEPARATE_HOUSEHOLD);
            break;
        }
    }

    return tax;
}