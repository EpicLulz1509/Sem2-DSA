//16) WAP to add two distances in inch-feet system

#include<stdio.h>
#include<stdlib.h>

struct Distance{
    int feet;
    int inch;
};

int main(){
    struct Distance *d1 = (struct Distance*)malloc(sizeof(struct Distance));
    struct Distance *d2 = (struct Distance*)malloc(sizeof(struct Distance));
    struct Distance *d3 = (struct Distance*)malloc(sizeof(struct Distance));

    printf("Enter inches and feet for first distance: ");
    scanf("%d %d", &d1->inch, &d1->feet);
    printf("Enter inches and feet for second distance: ");
    scanf("%d %d", &d2->inch, &d2->feet);

    d3->feet = d1->feet + d2->feet;
    d3->inch = d1->inch + d2->inch;

    while(d3->inch >= 12){
        d3->feet += 1;
        d3->inch = d3->inch - 12;
    }

    printf("Total inches: %d \n", d3->inch);
    printf("Total feet: %d \n", d3->feet);
    return 0;
}

// OUTPUT:
// Enter inches and feet for first distance: 9 5
// Enter inches and feet for second distance: 11 4
// Total inches: 8 
// Total feet: 10