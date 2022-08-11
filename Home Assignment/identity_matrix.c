//9) Write a program to read a matrix and check it for Identity Matrix.

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
    
    return 0;
}

// OUTPUT:
// Enter number of rows and columns: 2 2
// 1 1: 1
// 1 2: 0
// 2 1: 0
// 2 2: 1
// Identity matrix