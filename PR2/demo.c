#include <stdio.h>

int main()
{
    float a, b;
    char operation;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operation);   

    switch (operation)
    {
        case '+':
            printf("Sum = %.2f\n", a + b);
            break;

        case '-':
            printf("Subtraction = %.2f\n", a - b);
            break;

        case '*':
            printf("Multiplication = %.2f\n", a * b);
            break;

        case '/':
            if (b == 0)
                printf("Error: Division by zero!\n");
            else
                printf("Division = %.2f\n", a / b);
            break;
        

        default:
            printf("Invalid operation!\n");
    }

    return 0;
}
