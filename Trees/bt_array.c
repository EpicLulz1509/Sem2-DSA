#include<stdio.h>
#include<stdlib.h>

void build(int tree[], int index, int value){
    int ch, data;
    tree[index] = value;

    printf("Left child of %d (0/1): ", value);
    scanf("%d", &ch);
    if(ch == 1){
        printf("Enter left child of %d: ", value);
        scanf("%d", &data);
        build(tree, ((2*index)+1), data);
    }
    printf("Right child of %d (0/1): ", value);
    scanf("%d", &ch);
    if(ch == 1){
        printf("Enter right child of %d: ", value);
        scanf("%d", &data);
        build(tree, ((2*index)+2), data);
    }
}

void display(int tree[], int l){
    for(int i = 0; i < l; i++){
        if(tree[i] == -1)
            printf("_ ");
        else
            printf("%d ", tree[i]);
    }
}


int main(){
    int l = 20, index = 0, value;
    int tree[l];

    printf("Enter root node: ");
    scanf("%d", &value);

    for(int i = 0; i < l; i++){
        tree[i] = -1;
    }

    build(tree, index, value);
    display(tree, l);
    return 0;
}