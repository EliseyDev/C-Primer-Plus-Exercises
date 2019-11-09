#include <stdio.h>

int main(void) {
    int x, y;

    x = 10;
    y = 5;

    y = x + y; // y = 10 + 5 = 15
    x = x * y; // x = 10 * 15 = 150
	
    printf("%d %d\n", x, y);

    return 0;
}
