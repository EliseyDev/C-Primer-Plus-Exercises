/* The ABC Mail Order Grocery sells artichokes for $2.05 per pound, beets for $1.15 per
pound, and carrots for $1.09 per pound. It gives a 5% discount for orders of $100 or
more prior to adding shipping costs. It charges $6.50 shipping and handling for any
order of 5 pounds or under, $14.00 shipping and handling for orders over 5 pounds
and under 20 pounds, and $14.00 plus $0.50 per pound for shipments of 20 pounds or
more. Write a program that uses a  switch  statement in a loop such that a response of  a
lets the user enter the pounds of  artichokes desired,  b  the pounds of beets,  c  the pounds
of carrots, and  q  allows the user to exit the ordering process. The program should keep
track of cumulative totals. That is, if the user enters 4 pounds of beets and later enters
5 pounds of beets, the program should use report 9 pounds of beets. The program then should
compute the total charges, the discount, if any, the shipping charges, and the
grand total. The program then should display all the purchase information: the cost per
pound, the pounds ordered, and the cost for that order for each vegetable, the total cost
of the order, the discount (if there is one), the shipping charge, and the grand total of all
the charges. */

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
                printf("Selected 'artichokes', current weight: %.2lf\n", artichoke_order_weight);
                artichoke_order_weight += get_weight();
                break;
            }
            case BEETROOT: {
                printf("Selected 'pound', current weight: %.2lf\n", beetroot_order_weight);
                beetroot_order_weight += get_weight();

                break;
            }
            case CARROT: {
                printf("Selected 'carrots', current weight: %.2lf\n", carrot_order_weight);
                carrot_order_weight += get_weight();

                break;
            }
            case ORDER: {
                create_order(artichoke_order_weight, beetroot_order_weight, carrot_order_weight);

                printf("Thanks for buying!\n");
                choice = EXIT;
                break;
            }
            default: {

                break;
            }
        }

    }

    printf("Exit program.\n");

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
            printf("Incorrect value. Enter a, b, c, q - order, o - quit.\n");
            printf("Attempts left: %d\n", attempts);

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

    printf("What weight to add to the order? ");
    while (scanf("%lf", &weight) != 1 && attempts >= 0) {
        printf("Incorrect weight.\nAttempts left: %d\n"
               "Use digits 0-9 for input:", attempts--);
        clean_buffer();

        if (attempts == 0) {
            break;
        }
    }

    clean_buffer();
    printf("good weight %.2lf\n", weight);

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
    printf("\nEnter the letter corresponding to the desired category:\n");
    print_bar(SYMBOL, BAR_SIZE);
    printf(" Category            Identifier           Price $/lb        Order\n");
    print_bar(SYMBOL, BAR_SIZE);
    printf(" 1) Artichokes           a                   %.2lf           %.2lf lb\n", ARTICHOKE_PRICE,
           artichoke_order_weight);
    printf(" 2) Pound                b                   %.2lf           %.2lf lb\n", BEETROOT_PRICE,
           beetroot_order_weight);
    printf(" 3) Carrots              c                   %.2lf           %.2lf lb\n", CARROT_PRICE,
           carrot_order_weight);
    printf(" 4) Order                q\n");
    printf(" 5) Quit                 o\n");
    print_bar(SYMBOL, BAR_SIZE);
}

void print_order(const double artichoke_order_weight, const double beetroot_order_weight,
                 const double carrot_order_weight, const double artichoke_order_price,
                 const double beetroot_order_price, const double carrot_order_price,
                 const double total_price_discount, const double discount, const double shipping_price) {
    printf("Order:\n");
    print_bar(SYMBOL, BAR_SIZE);
    printf(" Category           Price $/lb           Order           Price\n");
    print_bar(SYMBOL, BAR_SIZE);
    printf(" 1) Artichokes        %.2lf             %.2lf lb         $%.2lf\n", ARTICHOKE_PRICE,
           artichoke_order_weight, artichoke_order_price);
    printf(" 2) Pound             %.2lf             %.2lf lb         $%.2lf\n", BEETROOT_PRICE,
           beetroot_order_weight, beetroot_order_price);
    printf(" 3) Carrots           %.2lf             %.2lf lb         $%.2lf\n\n", CARROT_PRICE, carrot_order_weight,
           carrot_order_price);
    printf("                                                   Discount: $%.2lf\n", discount);
    printf("                                                   Shipment: $%.2lf\n", shipping_price);
    printf("                                                   Total:    $%.2lf\n",
           total_price_discount + shipping_price);
    print_bar(SYMBOL, BAR_SIZE);
}