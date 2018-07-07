#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};

void inorder(struct node* p){
    if(p == NULL) return;
    inorder(p->left);
    printf("%d, ",p->data);
    inorder(p->right);
}

void preorder(struct node* p){
    if(p == NULL) return;
    printf("%d, ",p->data);
    preorder(p->left);
    preorder(p->right);
}

void postorder(struct node* p){
    if(p == NULL) return;
    postorder(p->left);
    postorder(p->right);
    printf("%d, ",p->data);
}

struct node* insert(struct node* p, int key){
    if(p == NULL){
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        temp->data = key;
        temp->left = temp->right = NULL;
        return temp;
    }
    if(key < p->data){
        p->left = insert(p->left, key);
    }
    else if(key > p->data){
        p->right = insert(p->right, key);
    }
    return p;
}

void makeBST(int arr[], int size){
    struct node* p = NULL;
    p = insert(p,arr[0]);
    for(int i = 1; i<size; i++){
        insert(p,arr[i]);
    }
    // traverse to show sorted sequence
    inorder(p);
}

int main(){
    int arr[] = {1,355,32,67,88,3};
    makeBST(arr,6);
    return 0;
}