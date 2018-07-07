#include<stdio.h>
char* strstr(const char* haystack,const char* needle){
    if(haystack==NULL || needle==NULL){return NULL;}
    while(*haystack!='\0'){
        if(*haystack==*needle){
        const char* h=haystack;
        const char* n=needle;
        while(*n!='\0' && *h==*n){
            h++;
            n++;
        }
        if(*n=='\0'){return (char*) haystack;}
    }
    haystack++;
    }
    return NULL;
}
int main(){
return 0;
}
