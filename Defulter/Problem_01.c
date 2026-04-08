#include <stdio.h>

int Max(int num1 ,int num2 ,int num3) {
    int max;

    if (num1 > num2 && num1 > num3)
    {
        return num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }

    return max;
}

int main() {
    int num1, num2, num3;

    printf("Enter 3 numbers you want: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("The Maximum is %d",Max(num1, num2, num3));

    return 0;
}