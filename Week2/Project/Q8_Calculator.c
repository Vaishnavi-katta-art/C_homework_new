#include <stdio.h>

int main()
{
    float a, b;
    char op;

    // taking two numbers and operator
    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%f", &b);

    // using switch for calculation
    switch (op)
    {
        case '+':
            printf("Answer = %.2f\n", a + b);
            break;

        case '-':
            printf("Answer = %.2f\n", a - b);
            break;

        case '*':
            printf("Answer = %.2f\n", a * b);
            break;

        case '/':
            if (b == 0)
            {
                printf("Cannot divide by zero\n");
            }
            else
            {
                printf("Answer = %.2f\n", a / b);
            }
            break;

        default:
            printf("Invalid operator\n");
    }

    return 0;
}