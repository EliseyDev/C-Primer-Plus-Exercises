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
            printf("Вы ввели некорретное значение. Допустимы 1-4 или 5 - выход.\n");
            clear_buffer();
        }

        if (category == EXIT) {
            break;
        }

        printf("Введите доход, для подсчета суммы облагаемого налога: ");
        attempt = ATTEMPTS;
        while (attempt >= 0 && (scanf("%lf", &sum) != 1)) {
            printf("Вы ввели некорретное значение. Необходимо ввести сумму из допустимых символов 0-9.\n");
            if (attempt > 0) {
                printf("Осталось попыток: %d\n", attempt--);
            } else {
                printf("Количество попыток исчерпано.\n");
                --attempt;
            }

            clear_buffer();
        };

        printf("Сумма исчисленного налога = $%.2lf\n\n", count_tax(category, sum));
    } while (category != EXIT);

    printf("Программа завершена.\n");

    return 0;
}


void print_menu(void) {
    printf("Выберете категорию, соответствующую тарифной ставке:\n");
    print_bar(SYMBOL, BAR_SIZE);
    printf("Категория                          Налог\n");
    print_bar(SYMBOL, BAR_SIZE);
    printf("1) Одинокий                        15%% c первых $17 850 плюс 28%% от суммы,\n"
           "                                   превышающей указанную\n\n");
    printf("2) Глава семейства                 15%% с первых $23 900 плюс 28%% от суммы,\n"
           "                                   превышающей указанную\n\n");
    printf("3) Состоит в браке, совместное     15%% с первых $29 750 плюс 28%% от суммы,\n"
           "   ведение хозяйства               превышающей указанную\n\n");
    printf("4) Состоит в браке, раздельное     15%% с первых $14 875 плюс 28%% от суммы,\n"
           "   ведение хозяйства               превышающей указанную\n\n");
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