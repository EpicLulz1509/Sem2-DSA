    #include<stdio.h>
    #include<stdlib.h>
    #define size 5

    int front = -1, rear = -1;
    int q[size]; 


    int isEmpty(){
        if(front == -1 && rear == -1){
            return 0;    
        }
        else{
            return 1;
        }
    }

    int isFull(){
        if(rear == size){
            return 0;    
        }
        else{
            return 1;
        }
    }

    void enqueue(int n){
        if(isFull() == 0){
            printf("Overflow condition no insertion possible \n");
            return;
        }
        printf("Inserted %d \n", n);
        if(isEmpty() == 0){
            front = 0;
            rear = 0;
            q[rear] = n;
            return;
        }
        else if(rear == size-1 && front != 0){
            rear = 0;
            q[rear] = n;
        }
        else{
            rear = (rear+1)%size;
            q[rear] = n;
            return;
        }
    }

    void dequeue(){
        int del = q[front];
        if(isEmpty() == 0){
            printf("Underflow condition no deletion possible \n");
            return;
        }
        if(front == rear){
            printf("Deleted : %d \n", del);
            front = -1;
            rear = -1;
        }
        else if(front == size-1){
            printf("Deleted : %d \n", del);
            front = 0;
        }
        else{
            printf("Deleted : %d \n", del);
            front = (front+1)%size;
        }
    }

    void peek(){
        printf("Peek = %d \n", q[rear]);
    }

    void display(){
        printf("Queue: ");
        int i = front;
        for(i = front; i < size; i++){
            printf("%d ", q[i]);
        }
        if(front > rear){
            for(int j = 0; j <= rear; j++){
                printf("%d ", q[j]);
            }
        }
        
        printf("\n");
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
        

        // enqueue(0);
        // enqueue(1);
        // enqueue(2);
        // enqueue(3);
        // enqueue(4);
        // display();
        // dequeue();
        // display();
        // enqueue(5);
        // display();
        // dequeue();
        // display();
        // enqueue(6);
        // display();
        return 0;
    }