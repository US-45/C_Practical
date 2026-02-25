#include <stdio.h>

int main() {

    int rows, columns;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    int matrix_01[rows][columns];
    int matrix_02[rows][columns];

    for(int i = 0; i<rows; i++){
        printf("Enter the elements of row %d for matrix 01: ", i+1);
        for(int j = 0; j<columns; j++){
            scanf("%d", &matrix_01[i][j]);
        }
    }

    for(int i = 0; i<rows; i++){
        for(int j = 0; j<columns; j++){
            printf("%d ", matrix_01[i][j]);
        }
        printf("\n");
    }



    for(int i = 0; i<rows; i++){
        printf("Enter the elements of row %d for matrix 02: ", i+1);
        for(int j = 0; j<columns; j++){
            scanf("%d", &matrix_02[i][j]);
        }
    }

    for(int i = 0; i<rows; i++){
        for(int j = 0; j<columns; j++){
            printf("%d ", matrix_02[i][j]);
        }
        printf("\n");
    }

    return 0;
}