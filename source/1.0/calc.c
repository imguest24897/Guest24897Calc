#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;
    printf("Enter operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two numbers (for calcultating): ");
    scanf("%lf %lf", &num1, &num2);
    switch(operator) {
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
            if (num2 == 0) {
                printf("I cannot divide by 0.");
                return 1;
            }
            result = num1 / num2;
            break;
        default:
            printf("Invalid operator.");
            return 1;
    }
    printf("Result: %lf\n", result);
    return 0;
}
