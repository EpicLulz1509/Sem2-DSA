#include<stdio.h>
#include<stdlib.h>

struct queue{
    int front, rear, size;
    int *arr;
};


int isEmpty(struct queue* q){
    if(q->front == -1 && q->rear == -1){
        printf("Queue empty \n");
        return 0;    
    }
    else{
        printf("Queue not empty \n");
        return 1;
    }
}

int isFull(struct queue* q){
    if(q->rear == q->size){
        printf("Queue full \n");
        return 0;    
    }
    else{
        printf("Queue not full \n");
        return 1;
    }
}

void enqueue(struct queue* q, int n){
    if(isFull(&q) == 0){
        printf("Overflow condition no insertion possible");
        return;
    }
    if(isEmpty(&q) == 0){
        q->front = 0;
        q->rear = 0;
        q->arr[q->rear] = n;
        return;
    }
    else{
        q->rear += 1;
        q->arr[q->rear] = n;
        return;
    }
}

void dequeue(struct queue* q){
    if(isEmpty == 0){
        printf("Underflow condition no deletion possible");
        return;
    }
    if(q->rear != 0){
        q->arr[q->rear] = 0;
        q->rear -= 1;
        return;
    }
    else{
        q->arr[q->rear] = 0;
        q->rear = -1;
        q->front = -1;
        return;
    }
}

void peek(struct queue* q){
    printf("Peek = %d \n", q->arr[q->rear]);
}

void display(struct queue* q){
    printf("Queue: ");
    for(int i = q->front; i <= q->rear; i++){
        printf("%d ", q->arr[q->front]);
    }
}




int main(){
    struct queue* simple;
    simple->front = -1;
    simple->rear = -1;
    simple->size = 10; 
    simple->arr = (int*)malloc(simple->size*sizeof(int));

    enqueue(simple, 5);
    enqueue(simple, 4);
    enqueue(simple, 3);
    enqueue(simple, 2);

    display(simple);


    return 0;
}