#include <stdio.h>
#include <stdlib.h>

struct Node {
    int co;
    int ex;
    struct Node* next;
};

struct Node* head1;
struct Node* head2;

void create(int x, int y, struct Node** head){
    struct Node *r, *z;
    z = *head;
    if (z == NULL) {
        r = (struct Node*)malloc(sizeof(struct Node));
        r->co = x;
        r->ex = y;
        *head = r;
        r->next = (struct Node*)malloc(sizeof(struct Node));
        r = r->next;
        r->next = NULL;
    }
    else {
        r->co = x;
        r->ex = y;
        r->next = (struct Node*)malloc(sizeof(struct Node));
        r = r->next;
        r->next = NULL;
    }
}

void polyadd(struct Node* poly1, struct Node* poly2, struct Node* poly){

    while (poly1->next && poly2->next) {
        if (poly1->ex > poly2->ex) {
            poly->ex = poly1->ex;
            poly->co = poly1->co;
            poly1 = poly1->next;
        }
 
        else if (poly1->ex < poly2->ex) {
            poly->ex = poly2->ex;
            poly->co = poly2->co;
            poly2 = poly2->next;
        }
 
        else {
            poly->ex = poly1->ex;
            poly->co = poly1->co + poly2->co;
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
 
        poly->next = (struct Node*)malloc(sizeof(struct Node));
        poly = poly->next;
        poly->next = NULL;
    }

    while (poly1->next || poly2->next) {
        if (poly1->next) {
            poly->ex = poly1->ex;
            poly->co = poly1->co;
            poly1 = poly1->next;
        }
        if (poly2->next) {
            poly->ex = poly2->ex;
            poly->co = poly2->co;
            poly2 = poly2->next;
        }
        poly->next = (struct Node*)malloc(sizeof(struct Node));
        poly = poly->next;
        poly->next = NULL;
    }
}


void display(struct Node* head){
    while (head->next != NULL) {
        printf("%dx^%d ", head->co, head->ex);
        head = head->next;
        if (head->co >= 0) {
            if (head->next != NULL)
                printf("+");
        }
    }
}

 
int main()
{
    struct Node *poly1 = NULL, *poly2 = NULL, *poly = NULL;
 
    create(5, 2, &poly1);
    create(4, 1, &poly1);
    create(2, 0, &poly1);

    create(-5, 1, &poly2);
    create(-5, 0, &poly2);
 
    printf("1st Number: ");
    display(poly1);
 
    printf("\n2nd Number: ");
    display(poly2);
 
    poly = (struct Node*)malloc(sizeof(struct Node));
 
    polyadd(poly1, poly2, poly);
 
    printf("\nAdded polynomial: ");
    display(poly);
 
    return 0;
}