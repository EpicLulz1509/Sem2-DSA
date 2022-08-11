//5) Write a program that accepts two integer arrays, add them and store them in a third array.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter number of elemnets: ");
    scanf("%d", &n);

    printf("FIRST ARRAY \n");    
    int arr1[n];
    printf("Enter elements: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr1[i]);
    }

    printf("SECOND ARRAY \n");
    int arr2[n];
    printf("Enter elements: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr2[i]);
    }

    int arr[n];
    for(int i = 0; i < n; i++){
        arr[i] = arr1[i] + arr2[i];
    }

    printf("Sum is: \n");    
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

// OUTPUT:
// Enter number of elemnets: 3
// FIRST ARRAY 
// Enter elements:
// 1
// 2
// 3
// SECOND ARRAY 
// Enter elements:
// 4
// 5
// 6
// Sum is: 
// 5 7 9