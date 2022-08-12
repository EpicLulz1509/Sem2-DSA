//17) WAP to store the information of 10 students and display it.

#include<stdio.h>
#include<stdlib.h>

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
        printf("Name, age, gpa of student %d is : %s %d %g \n", (i+1), s[i].name, s[i].age, s[i].gpa);
    }


    return 0;
}

// OUTPUT:
// Enter name, age, gpa of student 1: q 1 11
// Enter name, age, gpa of student 2: w 2 22
// Enter name, age, gpa of student 3: e 3 33
// Enter name, age, gpa of student 4: r 4 44
// Enter name, age, gpa of student 5: t 5 55
// Enter name, age, gpa of student 6: y 6 66
// Enter name, age, gpa of student 7: u 7 77
// Enter name, age, gpa of student 8: i 8 88
// Enter name, age, gpa of student 9: o 9 99
// Enter name, age, gpa of student 10: p 0 00
// Name, age, gpa of student 1 is : q 1 11 
// Name, age, gpa of student 2 is : w 2 22
// Name, age, gpa of student 3 is : e 3 33
// Name, age, gpa of student 4 is : r 4 44
// Name, age, gpa of student 5 is : t 5 55
// Name, age, gpa of student 6 is : y 6 66
// Name, age, gpa of student 7 is : u 7 77
// Name, age, gpa of student 8 is : i 8 88
// Name, age, gpa of student 9 is : o 9 99
// Name, age, gpa of student 10 is : p 0 0