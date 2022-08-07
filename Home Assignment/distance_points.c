#include<stdio.h>
#include<stdlib.h>
#include <math.h>


int main()
{
    int x1, x2, y1, y2;
    printf("Enter 2 points \n");
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    float distance =  sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2) * 1.0);
    printf("Distance between 2 points: %g", distance);
    return 0;


    return 0;
}