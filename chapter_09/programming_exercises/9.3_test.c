#include <stdio.h>
#include "9.3_lib.h"

int main(void) {
    char ch;
    int repeat;
    int rows;

    printf("Enter character: ");
    scanf("%c", &ch);

    printf("Enter repeat number for character %c: ", ch);
    scanf("%d", &repeat);
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    print_char(ch, repeat, rows);

    return 0;
}
