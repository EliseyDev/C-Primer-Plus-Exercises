/*
  Write a program that asks you to enter an ASCII code value, such as 66, and then prints
  the character having that ASCII code.
*/

#include <stdio.h> 

int main(void) {
    char ch = 0;

    printf("Please, enter an ASCII code decimal value:\n");
    scanf("%hhd", &ch);

    printf("Character is %c\n", ch);

    return 0;
}
