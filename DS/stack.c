#include<stdio.h>
#define MAX 50
struct stack{
  int top;
  int data[MAX];
}s;

int is_empty(struct stack* s){
  if(s->top == -1){
    return 1;
  }
  return 0;
}

int is_full(struct stack* s){
  if(s->top == MAX -1){
    return 1;
  }
  return 0;
}

void push(struct stack* s, int key){
  if(is_full(s)){
    printf("Over Flow!");
  }
  else{
    s->top = s->top + 1;
    s->data[s->top] = key;
    printf("%d is pushed into the stack!",key);
  }
}

int pop(struct stack* s){
  if(is_empty(s)){
    printf("Under Flow!");
  }
  else{
    int key = s->data[s->top];
    s->top = s->top - 1;
    return key;
  }
}

void peek(struct stack* s){
  if(s == NULL){
    printf("Please give a valid stack!");
  }
  else{
    printf("%d",s->data[s->top]);
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
