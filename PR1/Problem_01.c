#include <stdio.h>

int main() {
    int a,b; 
    printf("Enter two integers A , B: ");
    scanf("%d %d", &a, &b);
    printf("Sum of A and B is: %d\n", a+b);
    printf("Sub of A and B is: %d\n", a-b);
    printf("Product of A and B is: %d\n", a*b);
    printf("Division of A and B is: %.2f\n", (float)a/b);

    return 0;
}