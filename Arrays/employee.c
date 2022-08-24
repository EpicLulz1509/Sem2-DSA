//4. WAP to store n employee’s data such as employee name, gender, designation, department, basic pay. Calculate the gross pay of each employees as follows:
// Gross pay = basic pay + HR + DA
// HR=25% of basic and DA=75% of basic 

#include<stdio.h>

struct Employee{
    char name[100];
    int age;
    float pay;
    float total;
};



int main(){
    
    int n;

    printf("Enter no of elements: ");
    scanf("%d", &n);

    struct Employee e[n];
    
    for(int i = 0; i < n; i++){
        printf("Enter name of employee %d: ", i+1);
        scanf(" %s", &e[i].name);
        printf("Enter age of employee %d: ", i+1);
        scanf("%d", &e[i].age);
        printf("Enter pay of employee %d: ", i+1);
        scanf("%f", &e[i].pay);
    }

    for(int i = 0; i < n; i++){
        printf("Name of employee %d is : %s \n", (i+1), e[i].name);
        printf("Age of employee %d is : %d \n", (i+1), e[i].age);
        e[i].total = e[i].pay + e[i].pay*0.25 + e[i].pay*0.75;
        printf("Gross pay of employee %d is : %g \n", (i+1), e[i].total);
    }

    return 0;
}