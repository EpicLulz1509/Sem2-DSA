//5. WAP to find the largest number and counts the occurrence of the largest number in a dynamic array of n integers using a single loop.

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
        
    int max = arr[0], count = 0;    
        
    for (int i = 0; i < n; i++) {     
       if(arr[i] > max){    
           max = arr[i];
           count = 0;    
       }
       if(arr[i] == max){
        count++;
       }
    }      
    printf("Largest element present in given array: %d \n", max);    
    printf("Count of largest element: %d \n", count);
    return 0;    
}    