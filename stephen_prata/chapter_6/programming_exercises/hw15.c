#include <stdio.h>

const int ARRAY_SIZE = 255;

int main() {
    char array[ARRAY_SIZE];

    printf("Введите строку для отображения ее в обратном порядке: ");
    int counter = 0;
    do {
        scanf("%c", &array[counter]);
        counter++;
    } while (array[counter - 1] != '\n');

    for (int i = counter; i >=0 ; --i) {
        printf("%c", array[i]);
    }


    return 0;
}
