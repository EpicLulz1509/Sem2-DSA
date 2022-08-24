//1. WAP to check if a user input number is prime

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int factors = 0;
    for (int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
        factors = 1;
        break;
    }
  }

    if (factors == 0)
    printf("%d is a prime number.", n);
  else
    printf("%d is not a prime number.", n);

    return 0;
}