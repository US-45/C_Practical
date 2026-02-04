#include <stdio.h>

int main() {
    int num = 1, input;
    printf("Enter the number: ");   
    scanf("%d",&input);

    for (num; num <= 10; num++){
        printf("%d x %d = %d\n", input, num, input * num);
    }

    return 0;
}