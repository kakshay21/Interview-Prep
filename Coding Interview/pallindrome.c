#include<stdio.h>
#include<string.h>
int palindrom(const char* str,int s){
   int index=0;
   int lastIndex=s-1;
   while(index<lastIndex){
       char* forward=str;
       char* reverse=*(str+s-1);
       while(forward==' '){
           lastIndex++;
           forward=*(str+index);
       }
       while(reverse==' '){
           lastIndex--;
           reverse=*(str+lastIndex);
       }
       if(forward!=reverse){return 0;}
       index++;
       lastIndex--;
       }
    return 1;
}
int main(){
int n=0;
char s[10];
gets(s);
n=strlen(s);
int a=pallindrome(&s,n);
printf("%d",a);
return 0;
}
