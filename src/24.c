// This C program is intended to demonstrate basic arithmetic operations.
#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Perform addition and print the result
    printf("The sum of %d and %d is: %d\n", num1, num2, num1 + num2);

    return 0;
}
