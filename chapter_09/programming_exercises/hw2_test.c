#include "hw2_lib.h"
#include <stdio.h>

int main(void) {
    char ch;
    int row;
    int column;

    printf("Введите символ: ");
    scanf("%c", &ch);

    printf("Введите количество строк: ");
    scanf("%d", &row);
    printf("Введите количество столбцов: ");
    scanf("%d", &column);
    chline(ch, row, column);

    return 0;
}
