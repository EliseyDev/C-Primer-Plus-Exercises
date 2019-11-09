/* 1. Write a program that asks for your first name, your last name,
      and then prints the names in the format last, first . */

#include <stdio.h>

int main(void) {
    char name[20];
    char lastname[30];

    printf("Enter your first and last name:\n");
    scanf("%s %s", name, lastname);

    printf("%s %s\n", lastname, name);

    return 0;
}
