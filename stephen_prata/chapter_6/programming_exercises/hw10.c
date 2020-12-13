#include <stdio.h>

int getSum(int first_number, int second_number);

int getPow(int number);

int main(void) {
    int first_number = 0, second_number = 0;

    printf("Введите нижний и верхний целочисленный пределы: ");
    while (scanf("%d %d", &first_number, &second_number) == 2 && first_number < second_number) {
        printf("Сумма квадратов целых чисел от %d до %d равна %d\n", getPow(first_number), getPow(second_number),
               getSum(first_number, second_number));

        printf("Введите следующую комбинацию пределов: ");
    }

    printf("Работа завершена");

    return 0;
}

int getSum(int first_number, int second_number) {
    int pow = 0;

    for (int i = first_number; i <= second_number; ++i) {
        pow += i * i;
    }
    return pow;
}

int getPow(int number) {
    return number * number;
}