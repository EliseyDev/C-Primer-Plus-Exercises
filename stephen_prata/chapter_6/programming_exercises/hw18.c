#include <stdio.h>

int main(void) {
    int friends = 5;

    for (int i = 1; friends < 150; ++i) {
        friends -= i;
        friends *= 2;

        printf("Количество друзей в %d неделю = %d\n", i, friends);
    }


    return 0;
}
