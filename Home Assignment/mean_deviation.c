//4) Write a program that accepts all elements of an integer array and finds out mean and standard deviation of the array.

#include<stdio.h>
#include<stdlib.h>
#include <math.h>

int main(){
    int n, sum = 0;
    printf("Enter number of elemnets: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    float avg = (sum * 1.0)/n, sd;
    for(int i = 0; i < n; i++){
        sd += pow((arr[i] - avg), 2);
    }
    sd =  sqrt(sd/n);
    printf("Average : %g \nStandard Deviation : %g", avg, sd);
    return 0;
}

// OUTPUT:
// Enter number of elemnets: 5
// Enter elements: 
// 15
// 9
// 30
// 3
// 13
// Average : 14 
// Standard Deviation : 8.98888