//1. WAP to create a dynamic array and perform linear search function.

#include<stdio.h>
#include<stdlib.h>

int search(int arr[], int n, int num){
    for (int i = 0; i < n; i++)
        if (arr[i] == num)
            return i+1;
    return -1;
}

int main(){
    int n, num;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int* arr = (int*)malloc(n * sizeof(int));

    for(int i = 0; i < n; i++){
        printf("Enter elements for position %d : ", (i+1));
        scanf("%d", &arr[i]);
    }  

    printf("Enter element to be search: ");
    scanf("%d", &num);

    printf("Position of the element in the array is: %d", search(arr, n, num));

    return 0;
}