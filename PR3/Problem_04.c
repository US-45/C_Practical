#include <stdio.h>

int main() {
    int n, a = 0 ,b =1 ,c;
    printf("Enter a number: ");
    scanf("%d", &n);


    printf("the frbonacci series is: ");

    do
    {
        printf("%d ",a);
        c = a + b;
        a = b;
        b = c;
        n --;
    } while (n > 0);
    

    return 0;
}