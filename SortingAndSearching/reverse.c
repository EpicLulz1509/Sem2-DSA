//4. WAP to take an array and reverse the array.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        printf("Enter elements for position %d : ", (i+1));
        scanf("%d", &arr[i]);
    }  

    for(int i = n-1; i >= 0; i--){
        printf("%d ", arr[i]);
    }

    return 0;
}