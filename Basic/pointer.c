//5. WAP to create initialize, assign and access a pointer variable

#include<stdio.h>
#include<stdlib.h>

int main(){
    int x;
    int *X = &x;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Number is : %d", *X); 
    return 0;
}