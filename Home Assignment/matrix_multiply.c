//8) Write a program that accepts two integer matrixes, mattiplies them and store them in a third matrix.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int r, c;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("FIRST MATRIX \n");
    int mat1[r][c];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("Enter element for position %d %d: ", (i+1), (j+1));
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("SECOND MATRIX \n");
    int mat2[r][c];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("Enter element for position %d %d: ", (i+1), (j+1));
            scanf("%d", &mat2[i][j]);
        }
    }

    int mat[r][c];

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            mat[i][j]=0;    
            for(int k = 0;k<c;k++){    
                mat[i][j] += mat1[i][k] * mat2[k][j];    
            }    
        }
    }

    printf("Result is: \n");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}