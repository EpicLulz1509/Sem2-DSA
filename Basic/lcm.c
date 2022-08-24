//3. WAP to find LCM of 2 user input numbers using a function

#include <stdio.h>
#include<stdlib.h>

void lcm(int x, int y){
    int max;
    if(x > y)
        max = x;
    else
        max = y;

    while (1) {
        if (max % x == 0 && max % y == 0) {
            printf("The LCM of %d and %d is %d.", x, y, max);
            break;
        }
        max++;
    }
}


int main() {
    int x, y;
    printf("Enter two positive integers: ");
    scanf("%d %d", &x, &y);
    lcm(x, y);

    
    return 0;
}