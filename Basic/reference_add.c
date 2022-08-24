//7. WAP to swap 2 numbers by call by reference

#include <stdio.h>
 
int swap(int *a, int *b)
{
   int temp = *a;
   *a = *b;
   *b = temp; 
}
 
int main(){
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    int c = swap(&x, &y);
    printf("First number = %d \n", x);
    printf("Second number = %d \n", y);
 
   return 0;
}
 
