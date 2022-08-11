//12) WAP to store the information of a student and display it.

#include<stdio.h>

struct Student{
    char name[10];
    int age;
    float gpa;
};

int main(){

    int n = 10;
    struct Student s[n];

    for(int i = 0; i < n; i++){
        printf("Enter name, age, gpa of student %d: ", i+1);
        scanf("%s %d %f", &s[i].name, &s[i].age, &s[i].gpa);
    }

    for(int i = 0; i < n; i++){
        printf("Name, age, gpa of student %d is : %s %d %g \n", (i+1), s[i].name, s[i].age, s[i].age);
    }


    return 0;
}