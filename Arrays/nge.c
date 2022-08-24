//2. Given a dynamic array, WAP to print the next greater element (NGE) for every element

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;

    printf("Enter no of elements: ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++){
        printf("Enter elements for position %d : ", (i+1));
        scanf("%d", &arr[i]);
    }
    int next; 
    for (int i = 0; i<n; i++){ 
        next = -1; 
        for (int j = i+1; j<n; j++){ 
            if (arr[i] < arr[j]){ 
                next = arr[j]; 
                break; 
            } 
        } 
        printf("%d -- %d \n", arr[i], next); 
    } 

        
    
    return 0;    
}    