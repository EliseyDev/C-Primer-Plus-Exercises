#include <stdio.h>

int main(void) {
    int a, b;
    a = 5;
    b = 2; /* line 7 */
    b = a; /* line 9*/
    a = b; /* line 9*/

    printf("%d %d\n", b, a);

    return 0;
}
