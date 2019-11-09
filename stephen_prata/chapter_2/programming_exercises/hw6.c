/*
  Write a program that creates an integer variable called toes . Have the program set toes
  to 10 . Also have the program calculate what twice toes is and what toes squared is. The
  program should print all three values, identifying them.
*/

#include <stdio.h>

int main (void) {
    int toes = 10;
    int toes_twice = toes * 2;
    int toes_squared = toes * toes;

    printf("toes = %d\n", toes);
    printf("twice toes = %d\n", toes_twice);
    printf("squared toes = %d\n", toes_squared);

    return 0;
}
