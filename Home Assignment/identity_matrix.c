//9) Write a program that accepts two integer matrixes, mattiplies them and store them in a third matrix.

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
            if(i == j && mat[i][j] != 1)
                count++;
            else if(i != j && mat[i][j] != 0)
                count++;
        }
    }

    if(count != 0)
        printf("Not an identity matrix");
    else
        printf("Identity matrix");
}