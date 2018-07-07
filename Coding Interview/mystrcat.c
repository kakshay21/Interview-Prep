#include<stdio.h>
char* mystrcat(const char* dest,const char*src){
    if(src==NULL || dest==NULL){return (char*) dest;}
   char* d=dest;
    while(*d!='\0'){
        d++;
    }
    while(*src!='\0'){
    *d=*src;
    src++;
    d++;
    }
    return (char*) dest;
    }
int main(){
return 0;
}
