#include <stdio.h>

#define YES 'y'
#define NO 'n'
#define GREATER 'g'
#define LESS 'l'

void clean_buffer(void);

int main(void) {
    int left = 50;
    int right = 0;
    int mid = (left + right) / 2;
    char response;

    printf("Выберете целое число в интервале от 1 до 50. Я попробую угадать его.\n");
    printf("Нажмите клавишу y, если моя догадка верна и \nклавишу n в противном случае\n");
    printf("Вашим числом является  %d?\n", mid);

    while ((response = getchar()) != YES) {

        if (response == NO) {
            printf("Ладно, это число больше %d?\n", mid);
            printf("Нажмите g если больше и l если меньше\n");
            clean_buffer();


            while ((response = getchar()) != LESS && response != GREATER) {
                printf("Принимаются только варианты g или l.\n");
                clean_buffer();
            }

            if (response == GREATER) {
                right = mid - 1;

            } else {
                left = mid + 1;
            }

            mid = (left + right) / 2;
        } else {
            printf("Принимаются только варианты y или n.\n");
        }
        while (getchar() != '\n') {
            continue;
        }
        printf("Вашим числом является  %d?\n", mid);
    }

    printf("Я знал, что у меня получится!\n");

    return 0;
}

void clean_buffer(void) {
    while (getchar() != '\n');
}