#include <stdio.h>
#include <string.h>

char *my_strncpy(char *s1, const char *s2, int n);

int main(void) {
//    char *s1 = "str1";
//    char *s2 = "string2";
    char s1[5];
    char *s2 = "";
    my_strncpy(s1, s2, 4);

    printf("%s\n", s1);
    printf("%s\n", s2);
}

char *my_strncpy(char *const s1, const char *const s2, int n) {
    if (s1 != NULL && s2 != NULL) {
        for (int i = 0; i < n; i++) {
            if (s2[i] == '\0') {
                s1[i] = '\0';
            } else {
                s1[i] = s2[i];
            }
        }
    }

    return s1;
}

