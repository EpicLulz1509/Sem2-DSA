//2. WAP to create linked list and print it dynamically

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head = NULL;


void Insert(int x){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node*));
    struct Node* ptr = head;
    temp->data = x;   
    if(head == NULL){
        head = temp;
        temp->next = NULL;
        return;
    }
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->next = NULL;
    return;    
} 


void Print(){
    struct Node* ptr = head;
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}   


int main(){
    int n;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int x;
        printf("Enter data: ");
        scanf("%d", &x);
        Insert(x);
    }
    Print();
    return 0;
}