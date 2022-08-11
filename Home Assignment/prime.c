//19) Write a program in C to find all prime numbers between the given interval using functions.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n1, n2;
    printf("Enter range of numbers: ");
    scanf("%d %d", &n1, &n2);

    for(int i = n1; i < n2; i++){
        int factors = 0;
        for (int j = 2; j <= i / 2; j++) {
        if (i % j == 0) {
            factors = 1;
            break;
            }
        }

        if (factors == 0)
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