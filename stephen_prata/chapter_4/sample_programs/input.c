// input.c -- when to use &

#include <stdio.h>

int main(void) {
    
    // variables
    int age;
    float assets;
    // string
    char pet[30];

    printf("Enter your age, assets, and favorite pet.\n");
    // use the & here
    scanf("%d %f", &age, &assets);
    // no & for char array
    scanf("%s", pet);
    printf("%d $%.2f %s\n", age, assets, pet);

    short test;
    printf("enter\n");
    scanf("%hd", &test);
    printf("%d\n", test);

    return 0;
}