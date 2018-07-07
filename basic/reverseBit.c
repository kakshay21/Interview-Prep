#include<stdio.h>
int reverseBit(int n){
   int reverse=0;
   unsigned int count=sizeof(int)*8-1;
   while(n!=0){
       int last=n&1;
       reverse=last|reverse;
       reverse=reverse<<1;
       n=n>>1;
       count--;}
   reverse=reverse<<count;
   return reverse;
}
int main(){
return 0;
}
