//12) WAP to store the information of a student and display it.

#include<stdio.h>
#include<stdlib.h>

struct Student{
    char name[10];
    int age;
    float gpa;
};

int main(){

    int n;

    printf("Enter no students: ");
    scanf("%d", &n);
    
    struct Student s[n];

    for(int i = 0; i < n; i++){
        printf("Enter name %d: ", i+1);
        scanf(" %s", &s[i].name);
        printf("Enter age %d: ", i+1);
        scanf("%d", &s[i].age);
        printf("Enter gpa %d: ", i+1);
        scanf("%f", &s[i].gpa);
    }

    for(int i = 0; i < n; i++){
        printf("Name %d is : %s \n", (i+1), s[i].name);
        printf("Age %d is : %d \n", (i+1), s[i].age);
        printf("gpa %d is : %g \n", (i+1), s[i].gpa);
    }


    return 0;
}

// OUTPUT:
// Enter no students: 2
// Enter name 1: Deez
// Enter age 1: 69
// Enter gpa 1: 80
// Enter name 2: Nuts
// Enter age 2: 420
// Enter gpa 2: 90
// Name 1 is : Deez 
// Age 1 is : 69
// gpa 1 is : 80
// Name 2 is : Nuts
// Age 2 is : 420
// gpa 2 is : 90