//1. WAP to create linked list of 3 nodes and print it

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
    Insert(1);
    Insert(2);
    Insert(4);
    Print();
    return 0;
}