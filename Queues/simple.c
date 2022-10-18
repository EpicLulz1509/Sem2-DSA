    #include<stdio.h>
    #include<stdlib.h>
    #define size 10

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
        if(isEmpty() == 0){
            front = 0;
            rear = 0;
            q[rear] = n;
            return;
        }
        else{
            rear++;
            q[rear] = n;
            return;
        }
    }

    void dequeue(){
        if(isEmpty() == 0){
            printf("Underflow condition no deletion possible \n");
            return;
        }
        else if(front == rear){
            printf("Deleted : %d \n", q[front]);
            front = -1;
            rear = -1;
        }
        else{
            printf("Deleted : %d \n", q[front]);
            front++;
            if (front > rear)
                front = rear = -1;
        }
    }

    void peek(){
        printf("Peek = %d \n", q[rear]);
    }

    void display(){
        printf("Queue: ");
        for(int i = front; i <= rear; i++){
            printf("%d ", q[i]);
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
                printf("Invalid input \n");
                break;
            }
        }
        

        // enqueue(0);
        // enqueue(1);
        // enqueue(2);
        // display();
        // dequeue();
        // display();
        return 0;
    }