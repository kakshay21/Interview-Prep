#include<stdio.h>
size_t mystrlen(const char* str){
if(str==NULL){return 0;}
int lenght=0;
const char *ch=str;
while(*ch!='\0'){
lenght++;
ch++;
}
return lenght;
}
int main(){

return 0;
}
