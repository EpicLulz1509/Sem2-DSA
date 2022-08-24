//2. WAP to find the power of 2 numbers taken from user input

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int x, y;
    printf("Enter base: ");
    scanf("%d", &x);
    printf("Enter exponent: ");
    scanf("%d", &y);
    printf("Value of %d ^ %d is : %lf \n", x, y, pow(x, y));
    return 0;
}