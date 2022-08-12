//15) Create a structure that stores a point in 2D. Accept 2 points and find out the distance between the two points.

#include<stdio.h>
#include<stdlib.h>
#include <math.h>


struct Distance{
    int x;
    int y;
};

int main(){
    struct Distance d1, d2;
    printf("Enter 2 points \n");
    scanf("%d %d", &d1.x, &d1.y);
    scanf("%d %d", &d2.x, &d2.y);
    float distance =  sqrt(pow((d2.x - d1.x), 2) + pow((d2.y - d1.y), 2) * 1.0);
    printf("Distance between 2 points: %g", distance);
    return 0;


}

// OUTPUT:
// Enter 2 points 
// 1 2
// 3 4
// Distance between 2 points: 2.82843