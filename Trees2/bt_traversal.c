#include<stdio.h>
#include<stdlib.h>

struct Tree{
    int data;
    struct Tree* left;
    struct Tree* right;
};

void BuildTree(struct Tree* ptr){
    int ch;
    struct Tree* new = (struct Tree*)malloc(sizeof(struct Tree*));
    printf("Enter value: ");
    scanf("%d", &ptr->data);
    ptr->left = NULL;
    ptr->right = NULL;
    printf("Left child of %d (0/1): ", ptr->data);
    scanf("%d", &ch);
    if(ch == 1){
        ptr->left = new; 
        BuildTree(new);
    }
    printf("Right child of %d (0/1): ", ptr->data);
    scanf("%d", &ch);
    if(ch == 1){
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

void PreOrder(struct Tree *root){
    if(root == NULL)
        return;
    printf("%d ",root->data);
    PreOrder(root->left);
    PreOrder(root->right);
}

void PostOrder(struct Tree *root){
    if(root == NULL)
        return;
    PostOrder(root->left);
    PostOrder(root->right);
    printf("%d ",root->data);
}

int main(){
    struct Tree* root = (struct Tree*)malloc(sizeof(struct Tree*));
    BuildTree(root);
    
    printf("InOrder: ");
    InOrder(root);
    printf("\n");
    
    printf("PreOrder: ");
    PreOrder(root);
    printf("\n");

    printf("PostOrder: ");
    PostOrder(root);
    printf("\n");

    return 0;
}