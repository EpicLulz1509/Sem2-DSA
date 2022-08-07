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
            printf("Enter element for position %d %d: ", (i+1), (j+1));
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