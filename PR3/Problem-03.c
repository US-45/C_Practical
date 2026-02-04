#include <stdio.h>

int main()
{
    int n, dup, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    dup = n;

    if (n < 0)
    {
        printf("Please enter a valid positive number");
        return 0;
    }
    else if (n == 0)
    {
        printf("the sun of input number is: 0");
        return 0;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            sum += dup % 10;
            dup /= 10;
        }
    }
    printf("the sun of input number is: %d", sum);

    return 0;
}