#include <stdio.h>
#include "stdbool.h"

#define SUM 'c'
#define SUB 's'
#define MUL 'm'
#define DIV 'd'
#define EXIT 'q'

void print_menu(void);

void clean_buffer(void);

float get_number(bool is_f_pos, bool is_division);

int main(void) {
    char ch;
    bool is_div = false;
    bool is_f_pos;;
    float result;
    float f_num;
    float s_num;

    print_menu();
    while ((ch = getchar()) != EXIT) {
        if (ch == SUM || ch == SUB || ch == MUL || ch == DIV) {
            is_f_pos = true;
            f_num = get_number(is_f_pos, is_div);

            if (DIV == ch) {
                is_div = true;
            }
            is_f_pos = false;

            s_num = get_number(is_f_pos, is_div);
            clean_buffer();

            switch (ch) {
                case SUM: {
                    result = f_num + s_num;
                    printf("%.2f + %.2f = %.2f\n", f_num, s_num, result);
                    break;
                }
                case SUB: {
                    result = f_num - s_num;
                    printf("%.2f - %.2f = %.2f\n", f_num, s_num, result);
                    break;
                }
                case MUL: {
                    result = f_num * s_num;
                    printf("%.2f * %.2f = %.2f\n", f_num, s_num, result);
                    break;
                }
                case DIV: {
                    result = f_num / s_num;
                    printf("%.2f / %.2f = %.2f\n", f_num, s_num, result);
                    break;
                }
            }
        } else {
            printf("Некорретный ввод. Выберите из вариантов: c, s, m, d или q - завершить.\n");
            clean_buffer();
        }


        if (DIV == ch) {
            is_div = false;
        }
        print_menu();
    }

    return 0;
}

void print_menu(void) {
    printf("Выберите желаемую операцию:\n");
    printf("c. сложение      s. вычитание\n");
    printf("m. умножение     d. деление\n");
    printf("q. завершение\n");
}

void clean_buffer(void) {
    while (getchar() != '\n');
}

float get_number(bool is_f_pos, bool is_division) {
    float number;
    is_f_pos ? printf("Введите первое число: ") : printf("Введите второе число: ");
    while ((scanf("%f", &number) != 1) || (is_division && number == 0)) {
        if (is_division && number == 0) {
            printf("Введите второе число отличное от 0: ");
            number = -1;
            clean_buffer();
            continue;
        } else {
            printf(" не является числом.\nВведите число, такое как 2.5, -1.7E8 или 3: ");
            clean_buffer();
        }
    }

    return number;
}
