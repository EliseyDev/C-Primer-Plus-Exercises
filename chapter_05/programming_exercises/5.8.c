/* Write a program that displays the results of applying the modulus operation. The user
should first enter an integer to be used as the second operand, which will then remain
unchanged. Then the user enters the numbers for which the modulus will be computed,
terminating the process by entering 0 or less. A sample run should look like this:
  This program computes moduli.
  Enter an integer to serve as the second operand:  256
  Now enter the first operand:  438
  438 % 256 is 182
  Enter next number for first operand (<= 0 to quit):  1234567
  1234567 % 256 is 135
  Enter next number for first operand (<= 0 to quit):  0
  Done */

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

    printf("Exit program.\n");

    return 0;
}