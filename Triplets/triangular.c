#include<stdio.h>
#include<stdlib.h>

int main(){
    int l = 0, n = 3;
    
    // int mat[3][3] = {
    //     {0, 0, 0},
    //     {0, 1, 0},
    //     {0, 3, 9}
    // }; 
    
    int mat[3][3];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d %d = ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    int count1 = 0, count2 = 0;
    for(int i = 0; i < n; i++){ 
        for(int j = 0; j < n; j++){
            // printf("%d %d %d \n", i, j, mat[i][j]);
            if((i < j) && (mat[i][j] == 0))
                count1++;
            if((j < i) && (mat[i][j] == 0))
                count2++;
        }
    }

    if(count1 == 3)
        printf("Upper triangular matrix");
    else if(count2 == 3)
        printf("Lower triangular matrix");
    else
        printf("None");


   
    return 0;
}