//6) Write a program that accepts a string and finds its length without using any library Function.

#include<stdio.h>
#include<conio.h>
int main(){
    char str[100];
    int l1;

    printf("Enter the String: ");
    gets(str);

    for(l1 = 0; str[l1] != '\0'; l1++);

    printf("Length of string: %d", l1);
}