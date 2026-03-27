// use of build in functions of string.h header file in C language

#include <stdio.h>
#include<string.h>  

int main() {
    
    char str1[200] = "HELLO";
    char str2[200] = "hello";
    char str3[200];
    char str4[200] = "hello";
    char str5[200];
    
    int result, length, result2 ;

    // for length
    length = strlen(str1);
    printf("the length string 1 is %d\n", length);

    // for copy
    printf("the copyed string 3 is %s\n", strcpy(str3, str1));
    
    // for concat
    printf("the concaded string  is %s\n", strcat(str3, str1));
    
    //for compare
    result = strcmp(str1, str2);
    printf("the result of comparing str1 and str2 is %d\n", result);
    if(result == 0){
        printf("the given strings are same!\n");
    }else if(result > 0){
        printf("the str 1 is greater than str 2.\n");
    }else{
        printf("the str 2 is greater than str 1.\n");
    }
    
    // for uppercase
    printf("the uppercase string 1 is %s\n", strupr(str1));
    
    // for lowercase
    printf("the lowercase string 2 is %s\n", strlwr(str2));


    printf("the copyed string null is %s\n", strcpy(str4, str5));

    result2 = strcmp(str4, str5);
    printf("the result of comparing str1 and str2 is %d\n", result2);
    if(result2 == 0){
        printf("the given strings are same!\n");
    }else if(result2 > 0){
        printf("the str 1 is greater than str 2.\n");
    }else{
        printf("the str 2 is greater than str 1.\n");
    }

    printf("the vale at the index 2 of string 4 is %c\n", str4[6]);
    return 0;
}





