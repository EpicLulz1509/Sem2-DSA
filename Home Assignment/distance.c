//16) WAP to add two distances in inch-feet systeinch

#include<stdio.h>
#include<stdlib.h>

struct Distance{
    int feet;
    int inch;
};

int main(){
    struct Distance *d1 = NULL;
    struct Distance *d2 = NULL;
    struct Distance *d3 = NULL;
    
    d1 = (struct Distance*)malloc(sizeof(struct Distance));
    d2 = (struct Distance*)malloc(sizeof(struct Distance));
    d3 = (struct Distance*)malloc(sizeof(struct Distance));

    printf("Enter inches for first distance: ");
    scanf("%d", &d1->inch);
    printf("Enter feet for first distance: ");
    scanf("%d", &d1->feet);
    printf("Enter inches for second distance: ");
    scanf("%d", &d2->inch);
    printf("Enter feet for second distance: ");
    scanf("%d", &d2->feet);

    d3->feet = d1->feet + d2->feet;
    d3->inch = d1->inch + d2->inch;

    while(d3->inch >= 12){
        d3->feet += 1;
        d3->inch = d3->inch - 12;
    }

    printf("Total inches: %d \n", d3->inch);
    printf("Total feet: %d \n", d3->feet);

}

// OUTPUT:
// Enter inches for first distance: 9
// Enter feet for first distance: 5
// Enter inches for second distance: 11
// Enter feet for second distance: 4
// Total inches: 8 
// Total feet: 10