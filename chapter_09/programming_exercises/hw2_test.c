/* Devise a function  chline(ch,i,j)  that prints the requested character in columns  i
through  j . Test it in a simple driver. */

#include "hw2_lib.h"
#include <stdio.h>

int main(void) {
    char ch;
    int row;
    int column;

    printf("Enter character: ");
    scanf("%c", &ch);

    printf("Enter number of spaces: ");
    scanf("%d", &row);
    printf("Enter number to repeat character: ");
    scanf("%d", &column);
    chline(ch, row, column);

    return 0;
}
