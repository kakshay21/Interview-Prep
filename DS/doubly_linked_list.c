#include<stdio.h>
struct node
{
  int data;
  struct node *next;
  struct node *prev;
}l;
void insert(struct node* list, int key){
    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data  = key;
    newNode->next = list;
    newNode->prev = NULL;
    if(list !=  NULL){
      list->prev = newNode;
    }
    list = newNode;
}

void traverse(struct node* l){
  if(l == NULL ) return;
  while(l != NULL){
    printf("%d ->",l->data);
    l = l->next;
  }
}
void delete(struct node* head, int key){
  if(head == NULL) return;
  if(head->data == key){
    struct node* temp = head;
    printf("%d",temp->data);
    head = NULL;
    free(temp);
    return;
  }
  while(head->next != NULL && head->data == key){
    head = head->next;
  }
  if(head->next == NULL){
    struct node* temp = head;
    printf("%d",temp->data);
    head = temp->prev;
    free(temp);
    return;
  }
  else{
    struct node* temp = head;
    printf("%d",temp->data);
    head->next->prev = head->prev;
    head->prev->next = head->next;
    free(temp);
    return;
  }
}

struct node* search(struct node* head, int key){
  if(head == NULL) return NULL;
  int count = 0;
  struct node* temp = head;
  while(temp->next != NULL && temp->data != key){
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
      printf("Enter key\n");
      scanf("%d",&key);
      insert(list,key);
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