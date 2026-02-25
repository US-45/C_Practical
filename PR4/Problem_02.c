#include <stdio.h>

int main() {

    int rows, columns;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    int matrix_01[rows][columns];
    int matrix_02[rows][columns];
    int matrix_sum[rows][columns];
    int matrix_diff[rows][columns];
    int matrix_prod[rows][columns];


// Input for matrix 01
for(int i = 0; i<rows; i++){
    printf("Enter the elements of row %d for matrix 01: ", i+1);
    for(int j = 0; j<columns; j++){
        scanf("%d", &matrix_01[i][j]);
    }
}



// Input for matrix 02
    for(int i = 0; i<rows; i++){
        printf("Enter the elements of row %d for matrix 02: ", i+1);
        for(int j = 0; j<columns; j++){
            scanf("%d", &matrix_02[i][j]);
        }
    }

     

// MatriX sum
for (int i = 0; i<rows; i++){
    for(int j = 0; j<columns; j++){
        matrix_sum[i][j] = matrix_01[i][j] + matrix_02[i][j];
    }
}

printf("The sum of the two matrices is: \n");
for (int i = 0; i<rows; i++){
    for(int j = 0; j<columns; j++){
        printf("%d ", matrix_sum[i][j]);
    }
    printf("\n");
}



// MatriX difference
printf("The difference of the two matrices is: \n");
    for (int i = 0; i<rows; i++){
        for(int j = 0; j<columns; j++){
            printf("%d ", matrix_01[i][j] - matrix_02[i][j]);
        }
        printf("\n");
    }   
    



// MatriX product
    printf("The product of the two matrices is: \n");
    for (int i = 0; i<rows; i++){
        for(int j = 0; j<columns; j++){
                matrix_prod[i][j] = 0;
            for(int k = 0; k<columns; k++){
               matrix_prod[i][j] += matrix_01[i][k] * matrix_02[k][j];
            }
        }
    }
 
    for (int i = 0; i<rows; i++){
        for(int j = 0; j<columns; j++){
            printf("%d ", matrix_prod[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}