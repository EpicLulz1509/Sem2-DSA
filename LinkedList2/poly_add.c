#include <stdio.h>
#include <stdlib.h>

struct Node {
    int co;
    int ef;
    struct Node* next;
};


void Create(struct Node** head, int co, int ef){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node*));
    struct Node* ptr = *head;
    temp->co = co;
    temp->ef = ef;
    temp->next = NULL;
    if(ptr == NULL){
        ptr = temp;
        return;
    }
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = temp;
    return;    
}

void Print(struct Node** head){
    printf("Polynomial:");
    struct Node* ptr = *head;
    printf("Polynomial:");
    while(ptr->next != NULL){
        printf("%dx^%d", ptr->co, ptr->ef);
        ptr = ptr->next;
    }
}


int main(){
    struct Node *head1 = NULL, *head2 = NULL, *head3 = NULL;
    
    Create(&head1, 2, 2);
    printf("1");
    Create(&head1, 4, 1);
    printf("2");
    Create(&head1, 2, 1);
    printf("3");
    Print(&head1);
    printf("4");

 
    Create(&head2, 3, 4);
    Create(&head2, 4, 3);
    Create(&head2, 5, 1);
    Print(&head2);

    printf("First polynomial: ");
    Print(&head1);
    printf("Second polynomial: ");
    Print(&head2);

}