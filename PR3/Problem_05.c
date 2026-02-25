#include <stdio.h>

int main() {
    int n ,isPrime = 1;
    printf("Enter the number you want to check: ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n/2; j++)
        {
            if (n%i == 0)
            {
                printf("%d", i);

            }
            
        }
        
    }
    


    return 0;
}