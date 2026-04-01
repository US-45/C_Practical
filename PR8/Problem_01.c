#include <stdio.h>

int fact(int n){

    if(n == 0 || n == 1){
        return 1;
    }
    return n * fact(n - 1);

}


int main() {
    
    int num; 
    printf("Enter the number of which you want the Facrorial: ");
    scanf("%d", &num);

    if(num < 0){
        printf("You entered negative number pls enter a +ve number: ");
    }else{
        printf("The Factorial od %d is: %d\n", num, fact(num));
    }

    return 0;
}