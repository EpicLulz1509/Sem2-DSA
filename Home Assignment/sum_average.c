// 2) Write a program that accepts all elements of an integer array and finds out sum and average among the values.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, sum = 0;
    printf("Enter number of elemnets: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        printf("Enter element for position %d : ", (i+1));
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    float average = (sum * 1.0)/n;
    printf("Sum : %d \nAverage : %g", sum, average);
    return 0;
}