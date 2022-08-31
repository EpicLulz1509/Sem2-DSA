//7. WAP to create circular linked list and perform linear search

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


void Search(){
    struct Node* ptr = head;
    int big = ptr->data;
    while(ptr != NULL){
        if(big < ptr->data)
            big = ptr->data;
        ptr = ptr->next;
    }
    printf("Largest elements: %d", big);
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
    Insert(13);
    Insert(4);
    Insert(5);
    Search();
    printf("\n");
    Print();
    return 0;
}