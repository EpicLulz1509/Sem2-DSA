//5) Write a program that accepts two integer arrays, add them and store them in a third array.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, n1, n2;

    printf("FIRST ARRAY \n");
    printf("Enter number of elemnets: ");
    scanf("%d", &n1);
    int arr1[n1];
    for(int i = 0; i < n1; i++){
        printf("Enter element for position %d : ", (i+1));
        scanf("%d", &arr1[i]);
    }

    printf("SECOND ARRAY \n");
    printf("Enter number of elemnets: ");
    scanf("%d", &n2);
    int arr2[n2];
    for(int i = 0; i < n2; i++){
        printf("Enter element for position %d : ", (i+1));
        scanf("%d", &arr2[i]);
    }

    int arr[n];

    if(n1 < n2){
        int n = n2;
        for(int i = 0; i < n1; i++){
            arr[i] = arr1[i] + arr2[i];
        }
        for(int i = n1; i < n2; i++){
            arr[i] = arr2[i];
        }
    }
    else{
        int n = n1;
        for(int i = 0; i < n2; i++){
            arr[i] = arr1[i] + arr2[i];
        }
        for(int i = n1; i < n2; i++){
            arr[i] = arr1[i];
        }
    }

    printf("Sum is: \n");    
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}