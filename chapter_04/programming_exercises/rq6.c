/* For each of the following input lines, provide a scanf() statement to read it. Also
declare any variables or arrays used in the statement.
a. 101
b. 22.32 8.34E−09
c. linguini
d. catch 22
e. catch 22 (but skip over catch) */

#include <stdio.h>

int main(void) {
    // a
    int weight;
    scanf("%d", &weight);

    // b
    float price, distance;
    scanf("%f %f", &price, &distance);

    // c
    char name[20];
    scanf("%s", name);

    // d
    char action[10];
    int width;
    scanf("%s %d", action, &width);

    // e
    int value;
    scanf("%*s %d", &value);

    return 0;
}
