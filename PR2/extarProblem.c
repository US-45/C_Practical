#include <stdio.h>

int main()
{
    float a, b, answer = 0;
    char operation;

    printf("Enter number A: ");
    scanf("%f", &a);

    printf("Enter operation (+, -, *, /, ^, s, c): ");
    scanf(" %c", &operation);

    switch (operation)
    {
    case 's':
        answer = a * a;
        printf("Answer = %.2f\n", answer);
        return 0;
    case 'c':
        answer = a * a * a;
        printf("Answer = %.2f\n", answer);
        return 0;
    }


    printf("Enter number B: ");
    scanf("%f", &b);

    switch (operation)
    {
        case '+':
            answer = a + b;
            break;

        case '-':
            answer = a - b;
            break;

        case '*':
            answer = a * b;
            break;

        case '/':
            answer = a / b;
            break;

        case '^':
        {
            answer = 1;
            for (int i = 0; i < (int)b; i++)
            {
                answer *= a;
            }
            break;
        }

        default:
            printf("Invalid operation!\n");
            return 0;
    }

    printf("Answer = %.2f\n", answer);

    return 0;
}
