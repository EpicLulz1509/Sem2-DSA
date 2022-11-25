#include <stdio.h>
#include<stdlib.h>

struct tree{
   int data;
   struct tree *left,*right;

};

void buildtree(struct tree *ptr){
    printf("enter the value \n");
    scanf("%d",&ptr->data);
    ptr->left=NULL;
    ptr->right=NULL;
    int ch;
    struct tree *new;
    printf("Do you want to addd the left child of %d (1/0)\t",ptr->data);
    scanf("%d",&ch);
    if(ch==1){
    new=(struct tree *)malloc(sizeof(struct tree));
    ptr->left=new;
    buildtree(new);
    }
    printf("Do you want to addd the right child of %d (1/0)\t",ptr->data);
    scanf("%d",&ch);
    if(ch==1){
    new=(struct tree *)malloc(sizeof(struct tree));
    ptr->right=new;
    buildtree(new);
    }

}

//inorder traversal
void inorder(struct tree *root){
    if(root==NULL) return;
    inorder(root->left);
    printf("%d -> ", root->data);
    inorder(root->right);
}

//preorder traversal
void preorder(struct tree *root){
    if(root==NULL)return;
    printf("%d ->",root->data);
    preorder(root->left);
    preorder(root->right);
}

//postorder traversal
void postorder(struct tree *root){
    if(root==NULL)return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ->",root->data);
}


int main(){
    
    struct tree *root;
    root=(struct tree*)malloc(sizeof(struct tree));
    buildtree(root);

    printf("INORDER \n");
    inorder(root);

    printf("\nPREORDER \n");
    preorder(root);

    printf("\nPOSTORDER \n");
    postorder(root);
    return 0;
}