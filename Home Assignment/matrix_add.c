//7) Write a program that accepts two integer matrixes, add them and store them in a third matrix.

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
            printf("%d %d: ", (i+1), (j+1));
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("SECOND MATRIX \n");
    int mat2[r][c];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("%d %d: ", (i+1), (j+1));
            scanf("%d", &mat2[i][j]);
        }
    }

    int mat[r][c];

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            mat[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("Sum is: \n");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

// OUTPUT:
// Enter number of rows and columns: 2 2
// FIRST MATRIX 
// 1 1: 6
// 1 2: 9
// 2 1: 1
// 2 2: 5
// SECOND MATRIX 
// 1 1: 3
// 1 2: 4
// 2 1: 7
// 2 2: 2
// Sum is: 
// 9 13
// 8 7