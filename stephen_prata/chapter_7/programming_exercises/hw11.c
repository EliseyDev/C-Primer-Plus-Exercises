#include <stdio.h>
#include <stdbool.h>

#define ARTICHOKE_PRICE 2.05
#define BEETROOT_PRICE 1.15
#define CARROT_PRICE 1.09
#define DISCOUNT_BASE 100
#define DISCOUNT .05
#define TARIFF_PLAN1 6.50
#define TARIFF_PLAN2 14.00
#define MIN_WEIGHT 5.00
#define MIDDLE_WEIGHT 20.00
#define EXTRA_WEIGHT_PER_LB 0.5

#define SYMBOL '-'
#define BAR_SIZE 70
#define ARTICHOKE 'a'
#define BEETROOT 'b'
#define CARROT 'c'
#define ORDER 'q'
#define EXIT 'o'

void print_bar(char symbol, int size);

void print_menu(double artichoke_order_weight, double beetroot_order_weight, double carrot_order_weight);

void print_order(double artichoke_order_weight, double beetroot_order_weight, double carrot_order_weight,
                 double artichoke_order_price, double beetroot_order_price, double carrot_order_price,
                 double total_price_discount, double discount, double shipping_price);

void clean_buffer(void);

unsigned char get_category(void);

double get_weight(void);

void create_order(double artichoke_order_weight, double beetroot_order_weight, double carrot_order_weight);


int main(void) {
    unsigned char choice = 0;
    double artichoke_order_weight = 0;
    double beetroot_order_weight = 0;
    double carrot_order_weight = 0;

    while (choice != EXIT) {
        print_menu(artichoke_order_weight, beetroot_order_weight, carrot_order_weight);

        choice = get_category();

        switch (choice) {
            case ARTICHOKE: {
                printf("Выбран товар 'артишоки', текущий вес: %.2lf\n", artichoke_order_weight);
                artichoke_order_weight += get_weight();
                break;
            }
            case BEETROOT: {
                printf("Выбран товар 'свекла', текущий вес: %.2lf\n", beetroot_order_weight);
                beetroot_order_weight += get_weight();

                break;
            }
            case CARROT: {
                printf("Выбран товар 'морковь', текущий вес: %.2lf\n", carrot_order_weight);
                carrot_order_weight += get_weight();

                break;
            }
            case ORDER: {
                create_order(artichoke_order_weight, beetroot_order_weight, carrot_order_weight);

                printf("Благодарим за покупку!\n");
                choice = EXIT;
                break;
            }
            default: {

                break;
            }
        }

    }


    printf("Программа завершена.\n");

    return 0;
}

void print_bar(const char symbol, const int size) {
    for (int i = 0; i < size; ++i) {
        putchar(symbol);
    }
    putchar('\n');
}

void clean_buffer(void) {
    while ((getchar()) != '\n');
}

unsigned char get_category(void) {
    unsigned char choice;
    bool is_valid = false;
    int attempts = 3;

    while (!is_valid) {
        choice = getchar();
        clean_buffer();

        if (choice != ARTICHOKE && choice != BEETROOT && choice != CARROT && choice != ORDER && choice != EXIT) {
            printf("Некорректный ввод. Введите a, b, c, q - заказ, o - выход.\n");
            printf("Осталось попыток: %d\n", attempts);

            if (attempts-- == 0) {
                is_valid = true;
                choice = EXIT;
            }
        } else {
            is_valid = true;
        }
    }

    return choice;
}

double get_weight(void) {
    double weight = 0;
    int attempts = 3;

    printf("Какой вес добавить в заказ? ");
    while (scanf("%lf", &weight) != 1 && attempts >= 0) {
        printf("Введен некорректный вес выбранного товара.\nОсталось попыток: %d\n"
               "Пожалуйста, используйте цифры 0-9 для ввода:", attempts--);
        clean_buffer();

        if (attempts == 0) {
            break;
        }

    }

    clean_buffer();
    printf("Вес товара %.2lf\n", weight);

    return weight;
}

void create_order(const double artichoke_order_weight, const double beetroot_order_weight,
                  const double carrot_order_weight) {
    double artichoke_order_price = artichoke_order_weight * ARTICHOKE_PRICE;
    double beetroot_order_price = beetroot_order_weight * BEETROOT_PRICE;
    double carrot_order_price = carrot_order_weight * CARROT_PRICE;
    double total_price = artichoke_order_price + beetroot_order_price + carrot_order_price;
    double discount = total_price >= DISCOUNT_BASE ? total_price * DISCOUNT : 0;
    double total_price_discount = total_price - discount;

    double shipping_weight = artichoke_order_weight + beetroot_order_weight + carrot_order_weight;
    double shipping_price;

    if (shipping_weight <= MIN_WEIGHT && shipping_weight >= 0) {
        shipping_price = TARIFF_PLAN1;
    } else if (shipping_weight <= MIDDLE_WEIGHT && shipping_weight > MIN_WEIGHT) {
        shipping_price = TARIFF_PLAN2;
    } else {
        shipping_price = TARIFF_PLAN2 + EXTRA_WEIGHT_PER_LB * (shipping_weight - MIDDLE_WEIGHT);
    }

    print_order(artichoke_order_weight, beetroot_order_weight, carrot_order_weight, artichoke_order_price,
                beetroot_order_price, carrot_order_price, total_price_discount, discount, shipping_price);

}

void print_menu(const double artichoke_order_weight, const double beetroot_order_weight,
                const double carrot_order_weight) {
    printf("Чтобы оформить заказ, выберете категорию, указав букву:\n");
    print_bar(SYMBOL, BAR_SIZE);
    printf(" Категория       Идентификатор       Стоимость $/фунт     В заказе\n");
    print_bar(SYMBOL, BAR_SIZE);
    printf(" 1) Артишоки           a                   %.2lf           %.2lf lb\n", ARTICHOKE_PRICE,
           artichoke_order_weight);
    printf(" 2) Свекла             b                   %.2lf           %.2lf lb\n", BEETROOT_PRICE,
           beetroot_order_weight);
    printf(" 3) Морковь            c                   %.2lf           %.2lf lb\n", CARROT_PRICE, carrot_order_weight);
    printf(" 4) Заказ              q\n");
    printf(" 5) Выйти              o\n");
    print_bar(SYMBOL, BAR_SIZE);
}

void print_order(const double artichoke_order_weight, const double beetroot_order_weight,
                 const double carrot_order_weight, const double artichoke_order_price,
                 const double beetroot_order_price, const double carrot_order_price,
                 const double total_price_discount, const double discount, const double shipping_price) {
    printf("Ваш заказ:\n");
    print_bar(SYMBOL, BAR_SIZE);
    printf(" Категория        Стоимость $/фунт       В заказе         Стоимость\n");
    print_bar(SYMBOL, BAR_SIZE);
    printf(" 1) Артишоки           %.2lf             %.2lf lb         $%.2lf\n", ARTICHOKE_PRICE,
           artichoke_order_weight, artichoke_order_price);
    printf(" 2) Свекла             %.2lf             %.2lf lb           $%.2lf\n", BEETROOT_PRICE,
           beetroot_order_weight, beetroot_order_price);
    printf(" 3) Морковь            %.2lf             %.2lf lb           $%.2lf\n\n", CARROT_PRICE, carrot_order_weight,
           carrot_order_price);
    printf("                                                   Скидка:   $%.2lf\n", discount);
    printf("                                                   Доставка: $%.2lf\n", shipping_price);
    printf("                                                   Итого:    $%.2lf\n",
           total_price_discount + shipping_price);
    print_bar(SYMBOL, BAR_SIZE);
}