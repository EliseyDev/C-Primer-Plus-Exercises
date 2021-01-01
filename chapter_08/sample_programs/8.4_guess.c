#include <stdio.h>

int main(void) {
    int guess = 1;
    char response;

    printf("Выберете целое число в интервале от 1 до 100. Я попробую угадать его.\n");
    printf("Нажмите клавишу y, если моя догадка верна и \nклавишу n в противном случае\n");
    printf("Вашим числом является  %d?\n", guess);

    while ((response = getchar()) != 'y') {
        if (response == 'n') {
            printf("Ладно, тогда это %d\n", ++guess);
        } else {
            printf("Принимаются только варианты y или n.\n");
        }
        while (getchar() != '\n') {
            continue;
        }
    }

    printf("Я знал, что у меня получится!\n");

    return 0;
}
