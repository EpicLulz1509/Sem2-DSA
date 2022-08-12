//19) Write a program in C to find all prime numbers between the given interval using functions.

#include<stdio.h>
#include<stdlib.h>

int prime(int n){
    for (int j = 2; j <= n / 2; j++) {
        if (n % j == 0)
            return 1; 
        }
    return 0;
}

int main(){
    int n1, n2;
    printf("Enter range of numbers: ");
    scanf("%d %d", &n1, &n2);

    for(int i = n1; i < n2; i++){
        if (prime(i) == 0)
            printf("%d is a prime number. \n", i);
        else
            printf("%d is not a prime number. \n", i);
    }
}

// OUTPUT:
// Enter range of numbers: 20 25
// 20 is not a prime number. 
// 21 is not a prime number.
// 22 is not a prime number.
// 23 is a prime number.
// 24 is not a prime number.