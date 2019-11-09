/* 2. Write a program that requests your first name and does the following with it:
    a. Prints it enclosed in double quotation marks
    b. Prints it in a field 20 characters wide, with the whole field in quotes and the name
       at the right end of the fieldProgramming Exercises
    c. Prints it at the left end of a field 20 characters wide, with the whole field enclosed
       in quotes
    d. Prints it in a field three characters wider than the name */

#include <stdio.h>
#include <string.h>

int main(void) {
    char name[20];

    printf("Enter your name:\n");
    scanf("%s", name);

    // a
    printf("\"%s\"\n", name);

    // b
    printf("\"%20s\"\n", name);

    // c
    printf("\"%-20s\"\n", name);

    // d
    printf("%*s\n", strlen(name) + 3, name);
    
    return 0;
}
