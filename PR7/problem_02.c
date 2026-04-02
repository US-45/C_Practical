#include <stdio.h>

void swaping(int n1, int n2){
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
    
    printf("Number 1: %d\n", n1);
    printf("Number 2: %d\n", n2);
}

int main() {
    
    int n1, n2;
    printf("Enter number 1: ");
    scanf("%d", &n1);
    printf("Enter number 2: ");
    scanf("%d", &n2);
     if (n1<0 || n2<0)
    {
        printf("its is not a positve number! pls return a +ve nunber");
    }else{
    swaping(n1,n2);
    }
    return 0;
}