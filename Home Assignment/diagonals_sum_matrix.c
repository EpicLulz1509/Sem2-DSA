//11) WAP to find and print the sum of diagonals of a 2D Matrix.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int r, c, sum = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);


    int mat[r][c];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("Enter element for position %d %d: ", (i+1), (j+1));
            scanf("%d", &mat[i][j]);
            if(i == j)
                sum += mat[i][j];
            if((i + j) == (r - 1))
                sum += mat[i][j];
        }
    }

    printf("Sum of diagonals: %d", sum);
}