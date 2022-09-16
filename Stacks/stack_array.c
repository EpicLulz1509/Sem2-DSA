#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int stack[SIZE], top = -1;

void push(int x){
    if(top == SIZE-1){
        printf("Stack overflowed insertion not possible");
        return;
    }
    top++;
    stack[top] = x;
    printf("Insertion successful");
}

void pop(){
    if(top == -1){
        printf("Stack underflown deletion not possible");
        return;
    }
    int data = stack[top];
    top--;
    printf("%d deleted", data);
}

void isEmpty(){
    if(top == -1)
        printf("Stack empty");
    else
        printf("Stack not empty %d element", (top+1));
}

void display(){
    printf("Stack elements are: ");
    for(int i = 0; i <= top; i++){
        printf("%d ", stack[i]);
    }
}


int main(){
    int n = 0, x;
    printf("MENU: \n");
    while(n != 5){
        printf("Enter 1 to push a number \n");
        printf("Enter 2 for pop a number \n");
        printf("Enter 3 to check if stack is empty \n");
        printf("Enter 4 for display the stack \n");
        printf("Enter 5 to exit \n");
        scanf("%d", &n);
        switch(n){
            case 1 : 
                printf("Enter a number: \n");
                scanf("%d", &x);        
                push(x);
                printf("\n");
                break;
            case 2 :
                pop();
                printf("\n");
                break;
            case 3 :
                isEmpty();
                printf("\n");
                break;
            case 4 :
                display();
                printf("\n");
                break;
        }
             
    }    
    return 0;
}