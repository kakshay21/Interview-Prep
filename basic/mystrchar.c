#include<stdio.h>
char* mystrchar(const char* str,int c){
if(str==NULL){return 0;}
while(*str!='\0'){
if(*str==c){return (char*) str;}
str++;
}
return NULL;
}
int main(){
return 0;
}
