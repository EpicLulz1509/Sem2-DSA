//3) Write a program that accepts all elements of an integer array and finds out mean and standard deviation of the array.

#include<stdio.h>
#include<stdlib.h>
#include <math.h>

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
    float average = (sum * 1.0)/n, sd;
    for(int i = 0; i < n; i++){
        sd += pow((arr[i] - average), 2);
    }
    sd =  sqrt(sd/n);
    printf("Average : %g \nStandard Deviation : %g", average, sd);
    return 0;
}