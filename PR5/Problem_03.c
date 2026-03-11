//program to find whether give matrix is symmetric or not

#include <stdio.h>

int main(){
    int i,j,r,c;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d%d",&r,&c);
    int a[r][c];
    printf("Enter the elements of the matrix: \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    if(r!=c){
        printf("The matrix is not symmetric.");
        return 0;
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(a[i][j]!= a[j][i]){
                printf("The matrix is not symmetric.");
                return 0;
            }
        }
    }
    printf("The matrix is symmetric.");
    return 0;
}