#include<stdio.h>
#include<stdlib.h>
struct node {
  int data;
  struct node* next;
}l;
struct node* insert(struct node* l, int key, int pos){
  if(l == NULL) return NULL;
  if(pos == 0){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = key;
    newNode->next = NULL;
    l->next  = newNode;
    return newNode;
  }
  else if(pos == -1){
    while(l->next != NULL){
      l = l->next;
    }
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = key;
    newNode->next = NULL;
    l->next= newNode;
    return newNode;
  }
  else{
    struct node* prev = l;
    int count = 0;
    while(l!= NULL && count != pos){
      prev = l;
      l = l->next;
      count++;
    }
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = key;
    newNode->next = l->next;
    prev->next = newNode;
    return newNode;
  }
}

void traverse(struct node* l){
  if(l == NULL ) return;
  while(l != NULL){
    printf("%d ->",l->data);
    l = l->next;
  }
}
void delete(struct node* head, int key){
  struct node* temp = head;
  struct node* prev = head;
  if(temp != NULL && temp->data == key){
    printf("%d\n",temp->data);
    head = temp->next;
    free(temp);
  }
  while(temp != NULL && temp->data != key){
    prev = temp;
    temp = temp->next;
  }
  if(temp == NULL) return;

  if(temp != NULL && temp->data == key){
    prev->next = temp->next;
    printf("%d\n",temp->data);
    free(temp);
  } 
}

struct node* search(struct node* head, int key){
  if(head == NULL) return NULL;
  int count = 0;
  struct node* temp = head;
  while(temp != NULL && temp->data != key){
    temp = temp->next;
    count++;
  }
  if(temp->data == key){
    printf("%d is present at %d position\n",key,count+1);
    return temp;
  }
  if(temp == NULL)
    return NULL;
}

void reverseList(struct node* head){
  if(head == NULL) return NULL;
  struct node* first = head;
  struct node* rest = first->next;
  reverseList(rest);
  first->next->next = first;
  first->next = NULL;
  head = rest;
}


struct Node* SortedMerge(struct Node* a, struct Node* b){
  struct Node* result = NULL;
  if (a == NULL){
    return(b);
  }
  else if (b==NULL){
    return(a);
  }
  if (a->data <= b->data){
    result = a;
    result->next = SortedMerge(a->next, b);
  }
  else{
    result = b;
    result->next = SortedMerge(a, b->next);
  }
  return(result);
}

int main(){
  struct node* head = &l;
  struct node* list = head;
  int opn, insertOpn, key, pos;
  while(1){
    printf("\n************** MENU *************\n");
    printf("1. Insertion\n");
    printf("2. Deletion\n");
    printf("3. Traversing\n");
    printf("4. Searching\n");
    printf("Enter your choice\n");
    scanf("%d",&opn);
    switch(opn){
      case 1:
        printf("Where do you want to insert\n");
        printf("1. At begining.\n");
        printf("2. At a specific position.\n");
        printf("3. At end.\n");
        scanf("%d",&insertOpn);
        if(insertOpn == 1){
          printf("Enter key\n");
          scanf("%d",&key);
          insert(list,key,0);
        }
        else if(insertOpn == 2){
          printf("Enter key\n");
          scanf("%d",&key);
          printf("Enter position in integer");
          scanf("%d",&pos);
          insert(list,key,pos-1);
        }
        else{
          printf("Enter key\n");
          scanf("%d",&key);
          insert(list,key,-1);
        }
        break;
      case 2:
        printf("Enter key to delete\n");
        scanf("%d",&key);
        delete(list,key);
        break;
      case 3:
        traverse(list);
        break;
      case 4:
        printf("Enter a value to search");
        scanf("%d",&key);
        search(list, key);
        break;
    }
  }
  return 0;
}
