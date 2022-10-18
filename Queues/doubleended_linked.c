#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next, *prev;
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

void enqueue(int n, int x){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = n;
    if(isEmpty() == 0){
        front = temp;
        rear = temp;
        temp->next = NULL;
        temp->prev = NULL;
        return;
    }
    if(x == 1){
        temp->prev = rear;
        rear->next = temp;
        temp->next = NULL;
        rear = temp;
    }
    else if(x == 0){
        temp->prev = NULL;
        temp->next = front;
        front->prev = temp;
        front = temp;        
    } 
}

void dequeue(int x){
    if(isEmpty() == 0){
        printf("Underflown condition deletion not possible \n");
        return;
    }
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    if(front == rear){
        temp = front;
        front = NULL;
        rear = NULL;
        free(temp);
        return;
    }
    if(x == 0){
        temp = front;
        printf("Deleted element : %d \n", temp->data);
        front = front->next;
        front->prev = NULL;
        free(temp);
    }
    else if(x == 1){
        temp = rear;
        printf("Deleted element : %d \n", temp->data);
        rear = rear->prev;
        rear->next = NULL;
        free(temp);
    }
}

void displayRev(){
    printf("Queue: ");
    struct Node* ptr = rear;
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->prev;
    }
    printf("\n");
}

void display(){
    printf("Queue: ");
    struct Node* ptr = front;
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void peek(){
    if(isEmpty() == 1)
        printf(" Peek = %d \n", front->data);
    else
        printf("Underflown condition queue empty \n");
}

int main(){

    int x, n = 0, d;
        while(n != 5){
            printf("Enter 1 to enqueue at front or rear\n");
            printf("Enter 2 to dequeue at front or rear \n");
            printf("Enter 3 to display \n");
            printf("Enter 4 to display in reverse \n");
            printf("Enter 5 to exit \n");
            printf("Enter number: ");
            scanf("%d", &n);
            switch (n){
            case 1: 
                printf("Enter element, 0 for front, 1 for rear: ");
                scanf("%d %d", &x, &d);
                enqueue(x, d);
                break;
            case 2: 
                dequeue(d);
                break;
            case 3: 
                display();
                break;
            case 4: 
                displayRev();
                break;
            default: 
                break;
            }
        }

    // enqueue(1, 1);
    // enqueue(2, 1);
    // enqueue(3, 0);
    // dequeue(0);
    // enqueue(4, 1);
    // dequeue(1);
    // enqueue(5, 0);
    // display();
    // displayRev();
    // dequeue(0);
    // display();
    // displayRev();
    // enqueue(4, 1);
    // dequeue(0);
    // enqueue(5, 0);
    // display();
    // displayRev();
    return 0;
}