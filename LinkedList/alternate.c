//3. WAP to create linked list and print alternate nodes

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
    int i = 1;
    while(ptr != NULL){
        if(i % 2 != 0){
            printf("%d ", ptr->data);
        }
        i++;
        ptr = ptr->next;
    }
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