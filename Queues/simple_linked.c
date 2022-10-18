#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

int isEmpty(){
    if(front == NULL && rear == NULL)
        {
            printf("Queue empty \n");
            return 0;
        }
    else
        return 1; 
}

int isFull(){
    printf("Queue with nodes cannot be full \n");
}

void enqueue(int n){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = n;
    if(isEmpty() == 0){
        front = temp;
        rear = temp;
        temp->next = NULL;
    }
    else{
        rear->next = temp;
        temp->next = NULL;
        rear = temp;
    } 
}

void dequeue(){
    if(isEmpty() == 0){
        printf("Underflown condition deletion not possible \n");
        return;
    }
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp = front;
    printf("Deleted element : %d \n", temp->data);
    if(front == rear){
        front = NULL;
        rear = NULL;
        free(temp);
    }
    else{
        front = front->next;
        free(temp);
    }
}

void display(){
    printf("Queue: ");
    struct Node* ptr = front;
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n ");
}

void peek(){
    if(isEmpty() == 1)
        printf(" Peek = %d \n", front->data);
    else
        printf("Underflown condition queue empty \n");
}

int main(){

    int x, n = 0;
        while(n != 5){
            printf("Enter 1 to enqueue \n");
            printf("Enter 2 to dequeue \n");
            printf("Enter 3 to peek \n");
            printf("Enter 4 to display \n");
            printf("Enter 5 to exit \n");
            printf("Enter number: ");
            scanf("%d", &n);
            switch (n){
            case 1: 
                printf("Enter element: ");
                scanf("%d", &x);
                enqueue(x);
                break;
            case 2: 
                dequeue();
                break;
            case 3: 
                peek();
                break;
            case 4: 
                display();
                break;
            default: 
                break;  
            }
        }

    // enqueue(1);
    // enqueue(2);
    // enqueue(3);
    // display();
    // dequeue();
    // display();
    // enqueue(4);
    // enqueue(5);
    // display();
    return 0;
}