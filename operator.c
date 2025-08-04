#include <stdio.h>
int main() {
    char op = '*';
    double num1 = 12, num2 = 5, result;
    switch(op) {
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
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Division by zero error\n");
                return 1;
            }
            break;
        case '%':
            result = (int)num1 % (int)num2;
            break;
        default:
            printf("Invalid operator\n");
            return 1;
    }
    printf("Result: %.2lf\n", result);
    return 0;
}
