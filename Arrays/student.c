//3. WAP to store n student’s information (i.e. student’s roll no, name, gender, marks etc) of an educational institute and display all the data, using array of structure. 

#include<stdio.h>

struct Student{
    char name[10];
    int age;
    float gpa;
};

int main(){

    int n;

    printf("Enter no of elements: ");
    scanf("%d", &n);
    
    struct Student s[n];

    for(int i = 0; i < n; i++){
        printf("Enter name of student %d: ", i+1);
        scanf(" %s", &s[i].name);
        printf("Enter age of student %d: ", i+1);
        scanf("%d", &s[i].age);
        printf("Enter gpa of student %d: ", i+1);
        scanf("%f", &s[i].gpa);
    }

    for(int i = 0; i < n; i++){
        printf("Name of student %d is : %s \n", (i+1), s[i].name);
        printf("Age of student %d is : %d \n", (i+1), s[i].age);
        printf("gpa of student %d is : %f \n", (i+1), s[i].gpa);
    }


    return 0;
}