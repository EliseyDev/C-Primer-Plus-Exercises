#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *my_strncpy(const char *src, char *dest, int n);

int main(void) {
    int copy_times;
    int str_length;

    printf("Enter copy cycles and string length: ");
    scanf("%d %d\n", &copy_times, &str_length);

    char dest[str_length];
    char src[str_length];
    for (int i = 0; i < copy_times; i++) {
        scanf("%s", src);
        my_strncpy(src, dest, 4);
        printf("%s\n", src);
    }
}

char *my_strncpy(const char *const src, char *const dest, int n) {
    if (src != NULL && dest != NULL) {
        for (int i = 0; i < n; i++) {
            if (src[i] == '\0') {
                dest[i] = '\0';
            } else {
                dest[i] = dest[i];
            }
        }
    }

    return dest;
}

