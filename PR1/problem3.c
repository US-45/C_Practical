#include <stdio.h>

int main() {
    int a ,b, c;
    printf("enter a, b, c : ");
    scanf("%d %d %d", &a,&b,&c );

    printf("The sum of %d %d %d is %d\n", a,b,c, a+b+c);
    printf("The avg of %d %d %d is %.2f\n", a,b,c, (a+b+c)/3.0);

    return 0;
}