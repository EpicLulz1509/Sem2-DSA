//10) Write a program that finds out the transpose of a square matrix and store it in the same array.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int r, c, count = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);


    int mat[r][c];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("%d %d: ", (i+1), (j+1));
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Transpose is: \n");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("%d ", mat[j][i]);
        }
        printf("\n");
    }


}

// OUTPUT:
// Enter number of rows and columns: 2 2
// 1 1: 1
// 1 2: 2
// 2 1: 3
// 2 2: 4
// Transpose is: 
// 1 3
// 2 4