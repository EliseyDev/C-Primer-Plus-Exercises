//  arrchar.c -- array of pointers, array of strings

#include <stdio.h>

#define SLEN 40
#define LIM 5

int main(void) {
    const char *my_talents[LIM] = {
            "Adding numbers swiftly",
            "Multiplying accurately", "Stashing data",
            "Following instructions to the letter",
            "Understanding the C language"
    };

    char your_talents[LIM][SLEN] = {
            "Walking in a straight line",
            "Sleeping", "Watching television",
            "Mailing letters", "Reading email"
    };

    int i;

    puts("Let's compare talents.");

    printf("%-36s  %-25s\n", "My Talents", "Your Talents");

    for (i = 0; i < LIM; i++) {
        printf("%-36s  %-25s\n", my_talents[i], your_talents[i]);
    }

    printf("\nsizeof my_talents: %zd, sizeof your_talents: %zd\n",
           sizeof(my_talents), sizeof(your_talents));

    for (int j = 0; j < LIM; ++j) {
        printf("address of my_talents[%d]: %p; address of your_talents[%d]: %p\n",
        j, my_talents[j], j, your_talents[j]);
    }

    return 0;
}
