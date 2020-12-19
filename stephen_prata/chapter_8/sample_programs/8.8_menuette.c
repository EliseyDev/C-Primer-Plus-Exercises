#include <stdio.h>

char get_choice(void);

char get_first(void);

int get_int(void);

void count(void);

int main(void) {
    int choice;
    void count(void);

    while ((choice = get_choice()) != 'q') {
        switch (choice) {
            case 'a': {
                printf("Покупайте дешево, продавайте дорого.\n");
                break;
            }
            case 'r': {
                putchar('\a');
                break;
            }
            case 'c': {
                count();
                break;
            }
            default: {
                printf("Ошибка!\n");
                break;
            }
        }
    }
    printf("Программа завершена.\n");

    return 0;
}

void count(void) {
    int n, i;
    printf("До какого предела вести подсчет? Введите целое число:\n");
    n = get_int();

    for (i = 1; i <= n; i++) {
        printf("%d\n", i);
    }

    while (getchar() != '\n') {
        continue;
    }
}

char get_choice(void) {
    int ch;

    printf("Введите букву, соответствующую выбранному варианту:\n");
    printf("a. совет            r. звонок\n");
    printf("c. подсчет          q. выход\n");

    ch = get_first();

    while (ch != 'a' && ch != 'r' && ch != 'c' && ch != 'q') {
        printf("Выберете a, r, c или q.\n");
        ch = get_first();
    }
}

char get_first(void) {
    int ch;
    ch = getchar();

    while (getchar() != '\n') {
        continue;
    }
    return ch;
}

int get_int(void) {
    int input;
    char ch;

    while (scanf("%d", &input) != 1) {
        while ((ch = getchar()) != '\n') {
            putchar(ch);
        }
        printf(" не является целочисленным.\nВведите ");
        printf("целове число, такое как 25, -178 или 3: ");
    }

    return input;
}
