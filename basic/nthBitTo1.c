#include<stdio.h>
int nthBitTo1(int x,int n){
int check_bit=1<<n;
int or_bit=x|check_bit;
return or_bit;
}
int main(){
return 0;
}
