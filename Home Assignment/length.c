//6) Write a program that accepts a string and finds its length without using any library Function.

#include<stdio.h>
#include<stdlib.h>
int main(){
    char str[100];
    int i;

    printf("Enter the String: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++);

    printf("Length of string: %d", i);
}

// OUTPUT:
// Enter the String: Hello how are you
// Length of string: 17