#include <stdio.h>

int main()
{
    float marks;
    printf("Enter your marks: ");
    scanf("%f", &marks);

    if (marks > 100 || marks < 0)
        printf("invalid marks!!");
    else if (marks >= 80)
        printf("Distinction");
    else if (marks >= 60)
        printf("First class");
    else if (marks >= 40)
        printf("Second class");
    else
        printf("Fail");

    return 0;
}