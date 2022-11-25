#include<stdio.h>
#include<stdlib.h>

struct Tree{
    int data;
    struct Tree* left;
    struct Tree* right;
};

void BuildTree(struct Tree* ptr){
    int ch;
    struct Tree* new;
    printf("Enter value: ");
    scanf("%d", &ptr->data);
    ptr->left = NULL;
    ptr->right = NULL;
    printf("Left child of %d (0/1): ", ptr->data);
    scanf("%d", &ch);
    if(ch == 1){
        new = (struct Tree*)malloc(sizeof(struct Tree*));
        ptr->left = new; 
        BuildTree(new);
    }
    printf("Right child of %d (0/1): ", ptr->data);
    scanf("%d", &ch);
    if(ch == 1){
        new = (struct Tree*)malloc(sizeof(struct Tree*));
        ptr->right = new; 
        BuildTree(new);
    }
}

void InOrder(struct Tree *root){
    if(root == NULL)
        return;
    InOrder(root->left);
    printf("%d ", root->data);
    InOrder(root->right);
}

int main(){
    struct Tree* root = (struct Tree*)malloc(sizeof(struct Tree*));
    BuildTree(root);
    
    printf("InOrder: ");
    InOrder(root);
    printf("\n");
    
    return 0;
}