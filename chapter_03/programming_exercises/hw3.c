/*
  Write a program that sounds an alert and then prints the following text:
    Startled by the sudden sound, Sally shouted,
    "By the Great Pumpkin, what was that!"
*/

#include <stdio.h>

int main(void) {
    char alert = '\a';
    printf("%c Startled by the sudden sound, Sally shouted,\n", alert);
    printf("\"By the Great Pumking, what was that!\"\n");

    return 0;
}
