#include <stdio.h>

int main() {
    float num1, num2;
    char operator;

    printf("Enter Operand 1: ");
    scanf("%f", &num1);

    printf("Enter Operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter Operand 2: ");
    scanf("%f", &num2);

    float result;

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            printf("Invalid operator!");
            return 1;
    }

    printf("Result: %.2f\n", result);

    return 0;
}
