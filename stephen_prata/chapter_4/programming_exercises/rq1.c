/* Review Questions - 4. It’s find the error time! */

#include <stdio.h>

#define B "booboo"
#define X 10

int main(void) {
    int age, xp;
    char name[30];

    printf("Please enter your first name.\n");
    scanf("%s", name);
    printf("All right, %s, what's your age?\n", name);
    scanf("%d", &age);
    xp = age + X;
    printf("That's a %s! You must be at least %d.\n", B, xp);

    return 0;
}
