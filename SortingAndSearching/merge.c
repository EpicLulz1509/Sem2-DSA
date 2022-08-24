//3. WAP to merge two sorted array into one sorted array.

#include<stdio.h>
#include<stdlib.h>


void bubbleSort(int arr[], int n){
    for (int i = 0; i < (n-1); i++)
        for (int j = 0; j < (n-i-1); j++)
            if (arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
}

void merge(int arr1[], int arr2[], int m, int n){
    int arr[m+n];
    for (int i = 0; i < m; i++)
        arr[i] = arr1[i];
    for (int i = 0; i < n; i++)
        arr[m+i] = arr2[i];
    bubbleSort(arr, (m+n));
    printf("Merged Array: \n");
    for (int i = 0; i < m+n; i++){
        printf("%d  ",arr[i]);
    }
}



int main (){
    int m, n;

    printf("First array\n");
    printf("Enter number of elements: ");
    scanf("%d", &m);
    int arr1[m];

    for(int i = 0; i < m; i++){
        printf("Enter elements for position %d : ", (i+1));
        scanf("%d", &arr1[i]);
    } 

    printf("Second array\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr2[n];

    for(int i = 0; i < n; i++){
        printf("Enter elements for position %d : ", (i+1));
        scanf("%d", &arr2[i]);
    }   

    bubbleSort(arr1, m);
    bubbleSort(arr2, n);
    merge(arr1, arr2, m, n);

    return 0;
}
