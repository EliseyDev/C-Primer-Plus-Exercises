/* strptr.c -- strings as pointers */

#include <stdio.h>

int main(void) {
    printf("%s, %p, %c\n", "We", "are", *"space faters");

    return 0;
}
