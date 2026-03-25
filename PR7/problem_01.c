#include <stdio.h>

int factoreal(int n){
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int main() {
    
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n<0)
    {
        printf("its is not a positve number! pls return a +ve nunber");
    }else{
        printf("The factoreal of %d is %d", n, factoreal(n));

    }
    
    return 0;
}