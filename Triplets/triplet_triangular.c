#include<stdio.h>
#include<stdlib.h>

int main(){
    int l = 0, n = 3;
    
    // int sparse[3][3] = {
    //     {0, 0, 3},
    //     {0, 9, 0},
    //     {0, 0, 1}
    // }; 
    
    int sparse[3][3];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d %d = ", i, j);
            scanf("%d", &sparse[i][j]);
            if(sparse[i][j] != 0)
                l++;
        }
    }

    int triplet[l+1][3];

    int k = 1;
    triplet[0][0] = 3;
    triplet[0][1] = 3;
    triplet[0][2] = l;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(sparse[i][j] != 0){
                triplet[k][0] = i;
                triplet[k][1] = j;
                triplet[k][2] = sparse[i][j];
                k++;
            }
        }
    }

    int count1 = 3, count2 = 3;
    for(int i = 1; i < l+1; i++){
        printf("%d %d %d \n", triplet[i][0], triplet[i][1], triplet[i][2]);
        if(triplet[i][0] < triplet[i][1])
            count1--;
        else if(triplet[i][0] > triplet[i][1])
            count2--;      
    }

    if(count1 == 3)
        printf("Upper triangular matrix");
    else if(count2 == 3)
        printf("Lower triangular matrix");
    else
        printf("None");

    return 0;
}