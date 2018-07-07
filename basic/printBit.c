#include<stdio.h>
void printBit(int x){
    unsigned int check_bit=1<<(sizeof(int)*8-1);
    while(check_bit!=0){
        int result=check_bit&x;
        if(check_bit==result){printf("%d",1);}
        else{printf("%d",0);}
        check_bit=check_bit>>1;
    }
}
int main(){
int x;
scanf("%d",&x);
printBit(x);
return 0;
}
