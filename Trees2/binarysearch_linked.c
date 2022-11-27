#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};
int i = 0;

struct Node* New(int data){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node*));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    printf("Done %d \n", data); 
    return temp;
}


struct Node* Insert(struct Node* root, int data){
    if(root == NULL){
        root = New(data);
        return root;
    }
    else if(data < root->data){
        printf("Left %d \n", data);
        root->left = Insert(root->left, data);
        return root;
    }
    else if(data > root->data){
        printf("Right %d \n", data);
        root->right = Insert(root->right, data);
        return root;
    }
}

void BSearch(struct Node* root, int data){
    if(data == root->data){
        printf("Element found, %d", i);
    }
    else if(data < root->data){
        i++;
        printf("%d \n", i);
        BSearch(root->left, data);
    }
    else if(data > root->data){
        i++;
        printf("%d \n", i);
        BSearch(root->right, data);   
    }
    else{
        printf("Empty Tree, %d", i);
    }
    
}

void InOrder(struct Node *root){
    if(root == NULL)
        return;
    InOrder(root->left);
    printf("%d ", root->data);
    InOrder(root->right);
}

void PreOrder(struct Node *root){
    if(root == NULL)
        return;
    printf("%d ",root->data);
    PreOrder(root->left);
    PreOrder(root->right);
}

void PostOrder(struct Node *root){
    if(root == NULL)
        return;
    PostOrder(root->left);
    PostOrder(root->right);
    printf("%d ",root->data);
}

struct Node* FindMax(struct Node *root){
    struct Node* current = root;
    while(current->right != NULL){
        current = current->right;
    }
    return current;
}

struct Node* Delete(struct Node *root, int data){
    if(root == NULL)
        return root;
    else if(data < root->data)
        root->left = Delete(root->left, data);
    else if(data > root->data)
        root->right = Delete(root->right, data);
    else{
        if(root->left == NULL && root->right == NULL){
            free(root);
            root = NULL;
            return root;
        }
        else if(root->left == NULL){
            struct Node* temp = root;
            root = root->right;
            free(temp);
            return root;
        }
        else if(root->right == NULL){
            struct Node* temp = root;
            root = root->left;
            free(temp);
            return root;
        }
        else{
            struct Node* temp = FindMax(root->left);
            root->data = temp->data;
            root->left = Delete(root->left, temp->data);
            return root;
        }
    }
}


int main(){
    struct Node* root = (struct Node*)malloc(sizeof(struct Node*));
    root = NULL;
    int n;
    root = Insert(root, 30);
    root = Insert(root, 10);
    root = Insert(root, 20);    
    root = Insert(root, 50);
    root = Insert(root, 15);
    root = Insert(root, 21);
    InOrder(root);
    printf("\n");
    PreOrder(root);
    printf("\n");
    PostOrder(root);
    printf("\n");
    // printf("Enter number to be searched: ");
    // scanf("%d", &n);
    // BSearch(root, 20);
    Delete(root, 30);
    InOrder(root);
    return 0;
}