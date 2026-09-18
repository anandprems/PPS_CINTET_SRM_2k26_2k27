#include <stdio.h>

int main()
{
    float num1, num2, result;
    char operator;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator)
    {
        case '+':
            result = num1 + num2;
            printf("Result = %.2f", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result = %.2f", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result = %.2f", result);
            break;

        case '/':
            if (num2 != 0)
            {
                result = num1 / num2;
                printf("Result = %.2f", result);
            }
            else
            {
                printf("Cannot divide by zero");
            }
            break;

        default:
            printf("Invalid Operator");
    }

    return 0;
}

