//13) WAP to copy the content of one structure variable in another and compare whether they are same or not.

#include<stdio.h>
#include<stdlib.h>

struct Object{
    int num;
};

int main(){

    int n = 2;
    struct Object s[n];

    printf("Enter a number: ");
    scanf("%d", &s[0].num);

    s[1].num = s[0].num;

    for(int i = 0; i < n; i++){
        printf("Number in structure variable %d is : %d \n", (i+1), s[i].num);
    }


    return 0;
}

// OUTPUT:
// Enter a number: 5
// Number in structure variable 1 is : 5 
// Number in structure variable 2 is : 5