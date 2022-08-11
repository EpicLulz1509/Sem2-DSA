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
    printf("Enter day: ");
    scanf("%d", &d.day);
    printf("Enter month: ");
    scanf("%d", &d.month);
    printf("Enter year: ");
    scanf("%d", &d.year);

    int tm_mday, tm_mon, year = 2022;
    int  age = year - d.year;

    if((tm_mon+1) < d.month)
        age = age - 1;
    else if(tm_mday < d.day && (tm_mon+1) == d.month)
        age = age - 1;
       

    printf("Age is: %d", age);


}

// OUTPUT:
// Enter day: 15
// Enter month: 9
// Enter year: 2003
// Age is: 18