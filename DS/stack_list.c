#include<stdio.h>
struct node{
  int data;
  struct node* next;
}*top = NULL;

void push(int value)
{
   struct node* newNode;
   newNode = (struct node*)malloc(sizeof(struct node));
   newNode->data = value;
   if(top == NULL)
      newNode->next = NULL;
   else
      newNode->next = top;
   top = newNode;
}
void pop()
{
   if(top == NULL)
      printf("\nStack is Empty\n");
   else{
      struct node *temp = top;
      printf("\nDeleted element: %d", temp->data);
      top = temp->next;
      free(temp);
   }
}

void peek(struct stack* s){
    if(top == NULL)
      printf("\nStack is Empty\n");
    else{
      struct node *temp = top;
      while(temp->next != NULL){
	 printf("%d->",temp->data);
	 temp = temp -> next;
      }
      printf("%d->NULL",temp->data);
   }
}

int main(){
  int opn, key;
  struct stack* st = &s;
  st->top = -1;
  while(1){
    printf("\n1. push an element into stack\n");
    printf("2. pop an element from the stack\n");
    printf("3. peek the last element of the stack\n");
    scanf("%d",&opn);
    switch(opn){
      case 1:
        printf("Enter a value\n");
        scanf("%d",&key);
        push(st,key);
        break;
      case 2:
        pop(st);
        break;
      case 3:
        peek(st);
        break;
    }
  }
  return 0;
}
