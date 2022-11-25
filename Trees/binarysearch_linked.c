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

int main(){
    struct Node* root = NULL;
    int n;
    root = Insert(root, 30);
    root = Insert(root, 10);
    root = Insert(root, 20);    
    root = Insert(root, 50);
    root = Insert(root, 15);
    root = Insert(root, 11);
    // printf("Enter number to be searched: ");
    // scanf("%d", &n);
    BSearch(root, 20);
    return 0;
}