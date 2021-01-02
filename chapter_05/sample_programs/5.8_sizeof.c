// sizeof.c using operation sizeof

#include <stdio.h>

int main(void) {
    int n = 0;
    size_t intsize;
    intsize = sizeof(int);
    printf("n = %d, n contains of %zd bytes; all values of int are %zd bytes.\n",
           n, sizeof n, intsize);

    return 0;
}
