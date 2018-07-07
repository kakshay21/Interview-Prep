#include<stdio.h>
#define MAX 50
struct queue{
  int front;
  int last;
  int data[MAX];
}s;

int is_empty(struct queue* s){
  if((s->last) - (s->front) <= -1){
    return 1;
  }
  return 0;
}

int is_full(struct queue* s){
  if(s->last == MAX -1){
    return 1;
  }
  return 0;
}

void push(struct queue* s, int key){
  if(is_full(s)){
    printf("Over Flow!");
  }
  else{
    s->last = s->last + 1;
    s->data[s->last] = key;
    printf("%d is pushed into the stack!",key);
  }
}

int pop(struct queue* s){
  if(is_empty(s)){
    printf("Under Flow!");
  }
  else{
    int key = s->data[s->front];
    s->front = s->front + 1;
    return key;
  }
}

void peek(struct queue* s){
  if(s == NULL){
    printf("Please give a valid stack!");
  }
  else{
    printf("%d",s->data[s->last]);
  }
}

int main(){
  int opn, key;
  struct queue* st = &s;
  st->top = -1;
  while(1){
    printf("\n1. push an element into queue\n");
    printf("2. pop an element from the queue\n");
    printf("3. peek the last element of the queue\n");
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
