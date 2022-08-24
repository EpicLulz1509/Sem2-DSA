//6. WAP to add 2 numbers using pointers

#include<stdio.h>
#include<stdlib.h>

int main(){
    int x, y;
    int *X = &x;
    int *Y = &y;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    printf("Sum is : %d", (*X+*Y)); 
    return 0;
}