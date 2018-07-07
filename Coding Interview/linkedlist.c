#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
struct node{
    int data;
    struct node* next;
};
int length(struct node* head){
    int len=0;
    while(head!=NULL){
        len++;
        head=head->next;
    }
    return len;
    }
struct node* nth(struct node* head,int n){
    if(n<0){return NULL;}
    int index=0;
    while(head!=NULL && index<n){
       head=head->next;
       index++;
    }
    return head;
}
void append_data(struct node** headref,int data){
    assert(headref!=NULL);
    if(*headref==NULL){
        *headref=(struct node*)malloc(sizeof(struct node));
        (*headref)->data=data;
        (*headref)->next=NULL;
        return ;
    }
    struct node* head=*headref;
    while(head->next!=NULL){
         head=head->next;
    }
    head->next=(struct node*)malloc(sizeof(struct node));
    head->next->data=data;
    head->next->next=NULL;
} 
int pop(struct node** headref){
    assert(headref!=NULL);
    if(*headref!=NULL){
        printf("freeing: %d",(*headref)->data);
        struct node* next=(*headref)->next;
        int data=(*headref)->data;
        (*headref)->next=NULL;
        free(*headref);
        *headref=next;
        return data;
        }
    assert(0);
}
void deletelist(struct node** headref){
    assert(headref!=NULL);
    struct node* head=*headref;
    struct node* next=NULL;
    while(head!=NULL){
        printf("freeing: %d",head->data);
        next=head->next;
        head->next=NULL;
        free(head);
        head=next;
    }
}

int main(){
return 0;
}
