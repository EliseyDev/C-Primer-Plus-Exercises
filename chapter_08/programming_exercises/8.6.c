/* Modify the  get_first()  function of  Listing   8.8    so that it returns the first non-
whitespace character encountered. Test it in a simple program. */

#include <stdio.h>
#include <ctype.h>

char get_choice(void);

char get_first(void);

int get_int(void);

void count(void);

int main(void) {
    int choice;
    char ch;
    void count(void);

    while ((choice = get_choice()) != 'q') {
        switch (choice) {
            case 'a': {
                while ((ch = getchar()) != EOF) {
                    if (!isspace(ch)) {
                        printf("First no space character: %c\n", ch);
                        break;
                    }
                }
                break;
            }
            case 'r': {
                putchar('\a');
                break;
            }
            case 'c': {
                count();
                break;
            }
            default: {
                printf("Error!\n");
                break;
            }
        }
    }
    printf("Exit program.\n");

    return 0;
}

void count(void) {
    int n, i;
    printf("Enter positive integer to count up to:\n");
    n = get_int();

    for (i = 1; i <= n; i++) {
        printf("%d\n", i);
    }

    while (getchar() != '\n') {
        continue;
    }
}

char get_choice(void) {
    int ch;

    printf("Enter letter for chosen category:\n");
    printf("a. first character  r. ring\n");
    printf("c. counting         q. exit\n");

    ch = get_first();

    while (ch != 'a' && ch != 'r' && ch != 'c' && ch != 'q') {
        printf("Select a, r, c or q-exit.\n");
        ch = get_first();
    }
}

char get_first(void) {
    int ch;
    ch = getchar();

    while (getchar() != '\n') {
        continue;
    }
    return ch;
}

int get_int(void) {
    int input;
    char ch;

    while (scanf("%d", &input) != 1) {
        while ((ch = getchar()) != '\n') {
            putchar(ch);
        }
        printf(" is not positive integer.\nEnter ");
        printf("positive integer like 25, -178 or 3: ");
    }

    return input;
}

