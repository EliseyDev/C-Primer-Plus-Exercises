#include <stdio.h>
#include <stdbool.h>

int main() {
    int secondOperand;

    printf("This program counts division by modulus.\n");
    printf("Enter the number of the second operand: ");
    scanf("%d", &secondOperand);

    bool isAlive = true;

    while (isAlive) {
        int firstOperand;
        printf("Enter the number of the first operand (<= 0 exit program): ");
        int state = scanf("%d", &firstOperand);

        if (state == 0 || firstOperand <= 0) {
            isAlive = false;
        } else {
            printf("%d %% %d is %d\n", firstOperand, secondOperand, (firstOperand % secondOperand));
        }
    }

    printf("Done!\n");

    return 0;
}