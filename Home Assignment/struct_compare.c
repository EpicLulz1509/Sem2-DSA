//13) WAP to copy the content of one structure variable in another and compare whether they are same or not.

#include<stdio.h>
#include<stdlib.h>

struct Object{
    int num;
};

int main(){

    struct Object s1, s2;

    printf("Enter a number: ");
    scanf("%d", &s1.num);

    s2.num = s1.num;

    printf("Number in structure variable 1 is : %d \n", s1.num);
    printf("Number in structure variable 2 is : %d \n", s2.num);

    if(s2.num == s2.num)
        printf("They are equal.");
    else
        printf("They are not equal.");

    return 0;
}

// OUTPUT:
// Enter a number: 12
// Number in structure variable 1 is : 12 
// Number in structure variable 2 is : 12
// They are equal.