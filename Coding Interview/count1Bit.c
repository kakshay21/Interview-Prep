#include<stdio.h>
int count1Bit(int n){
    int count=0;
    while(n!=0){
        n=n&(n-1);
        count++;
    }
    return count;
}
int main(){
int n;
scanf("%d",&n);
printf("%d",count1Bit(n));
return 0;
}
