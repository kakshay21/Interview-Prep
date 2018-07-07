#include<stdio.h>
int nthbit(int x,int n){
int check_bit=1<<n;
int and_bit=check_bit&x;
if(check_bit==and_bit){return 1;}
else{return 0;}
}
int main(){
return 0;
}
