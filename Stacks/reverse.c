#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
struct Node* stack = NULL;

void push(int x){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node*));
    temp->data = x;
    temp->next = NULL;
    if(stack == NULL)
        stack = temp;
    else{
        temp->next = stack;
        stack = temp;
    }
}

void pop(){
    if(stack == NULL){
        printf("Stack underflown deletion not possible");
        return;
    }
    struct Node* temp = NULL;
    temp = stack;
    stack = stack->next;
    free(temp);    
}

void isEmpty(){
    if(stack == NULL)
        printf("Stack empty");
    else
        printf("Stack not empty");
    return;
}

void printReverse(struct Node* head){
    if (head == NULL)
       return;
    printReverse(head->next);
    printf("%d ", head->data);
}

void displayReverse(){
    printf("Stack elements are: ");
    struct Node* temp = stack;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

void display(){
    printf("Stack elements are: ");
    struct Node* temp = stack;
    printReverse(temp);
}




int main(){
    int n = 0, x;
    printf("MENU: \n");
    while(n != 6){
        printf("Enter 1 to push a number \n");
        printf("Enter 2 for pop a number \n");
        printf("Enter 3 to check if stack is empty \n");
        printf("Enter 4 for display the stack \n");
        printf("Enter 5 for display the stack in reverse \n");
        printf("Enter 6 to exit \n");
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
            case 5 :
                displayReverse();
                printf("\n");
                break;
        }
             
    }    
    return 0;
}