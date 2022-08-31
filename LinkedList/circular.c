//6. WAP to create circular linked list and print all elements

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
        temp->next = head;
        return;
    }
    while(ptr->next != head){
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->next = head;
    return;    
} 


void Print(){
    struct Node* ptr = head;
    while(ptr->next != head){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("%d", ptr->data);
}   


int main(){
    Insert(1);
    Insert(2);
    Insert(3);
    Insert(4);
    Insert(5);
    Print();
    return 0;
}