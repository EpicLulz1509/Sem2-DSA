#include <stdio.h>
#include <stdlib.h>

struct Node {
    int co;
    int ex;
    struct Node* next;
};
 
struct Node* head1 = NULL;
struct Node* head2 = NULL;

void Create(int x, int y){
    int n, x, y;
    printf("Which polynomial");

    printf("Polynomial 1: ");
    printf("Enter coefficent and exponant: ");
    scanf("%d %d", &x, &y);
    Create(x, y);
    printf("Polynomial 2: ");
    printf("Enter coefficent and exponant: ");
    scanf("%d %d", &x, &y);
    Create(x, y);
}

int main(){
    
}