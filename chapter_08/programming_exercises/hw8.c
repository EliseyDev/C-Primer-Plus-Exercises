/* Write a program that shows you a menu offering you the choice of addition, subtraction,
multiplication, or division. After getting your choice, the program asks for two numbers,
then performs the requested operation. The program should accept only the offered
menu choices. It should use type  float  for the numbers and allow the user to try again
if he or she fails to enter a number. In the case of division, the program should prompt
the user to enter a new value if  0  is entered as the value for the second number. A typical
program run should look like this:
 Enter the operation of your choice:
  a. add           s. subtract
  m. multiply      d. divide
  q. quit */

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
            printf("Incorrect input. Enter: c, s, m, d or (q - quit).\n");
            clean_buffer();
        }


        if (DIV == ch) {
            is_div = false;
        }
        print_menu();
    }

    printf("Exit program.\n");

    return 0;
}

void print_menu(void) {
    printf("Chose operation:\n");
    printf("c. add        s. subtract\n");
    printf("m. multiply   d. divide\n");
    printf("q. quit\n");
}

void clean_buffer(void) {
    while (getchar() != '\n');
}

float get_number(bool is_f_pos, bool is_division) {
    float number;
    is_f_pos ? printf("Enter first number: ") : printf("Enter second number: ");
    while ((scanf("%f", &number) != 1) || (is_division && number == 0)) {
        if (is_division && number == 0) {
            printf("Enter a number other than 0: ");
            number = -1;
            clean_buffer();
            continue;
        } else {
            printf("  is not an number.\nPlease enter a number, such as 2.5, -1.78E8, or 3: ");
            clean_buffer();
        }
    }

    return number;
}
