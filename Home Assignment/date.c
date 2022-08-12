//14) Write a program to declare a structure DATE containing day, month and year. Find the age of a person if the date of birth and current date is given.

#include<stdio.h>
#include<stdlib.h>
#include <time.h>

struct DATE{
    int day;
    int month;
    int year;
};

int main(){
    struct DATE d;
    printf("Enter day, month, year: ");
    scanf("%d %d %d", &d.day, &d.month, &d.year);

    int tm_mday, tm_mon, year = 2022;
    int  age = year - d.year;

    if((tm_mon+1) < d.month)
        age = age - 1;
    else if(tm_mday < d.day && (tm_mon+1) == d.month)
        age = age - 1;
       

    printf("Age is: %d", age);
    return 0;


}

// OUTPUT:
// Enter day, month, year: 15 9 2003
// Age is: 18