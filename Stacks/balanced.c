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
        printf("Stack empty balanced paranthesis");
    else
        printf("Stack not empty unbalanced paranthesis");
    return;
}

void printReverse(struct Node* head){
    if (head == NULL)
       return;
    printReverse(head->next);
    printf("%d ", head->data);
}

void display(){
    printf("Stack elements are: ");
    struct Node* temp = stack;
    printReverse(temp);
}




int main(){
    int n = 0;
    char x;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("Enter a bracket: \n");
        scanf(" %c", &x);
        if(x == '('){
            push(x);
            printf("\n");
        }
        else if(x == ')'){
            pop();
            printf("\n");
        }
    }       
    isEmpty();      
    return 0;
}