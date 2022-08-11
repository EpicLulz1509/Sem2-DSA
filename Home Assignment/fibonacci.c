// 3) Write a program that generated the first 10 Fibonacci numbers and store them into an array of size 10.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n = 10, a = 0, b = 1;
    int sum = a + b;
    int arr[n];
    for(int i = 0; i < n; i++){
        arr[i] = sum;
        b = a;
        a = sum;
        sum = a + b;
    }
    printf("First 10 fibonacci numebers are: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}

// OUTPUT:
// First 10 fibonacci numebers are: 1 1 2 3 5 8 13 21 34 55 