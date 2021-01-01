/*
  There are approximately 3.156 × 10 7 seconds in a year. Write a program that requests
  your age in years and then displays the equivalent number of seconds.
*/

#include <stdio.h>

int main(void) {
    double seconds_in_year = 3.156e7;
    int age = 0;

    printf("Please, enter your age: ");
    scanf("%d", &age);

    printf("Your age in seconds = %f\n", seconds_in_year * age);

    return 0;
}
