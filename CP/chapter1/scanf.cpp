#include<cstdio>
using namespace std;

int N;
char x[110];

int main(){
  scanf("%d\n",&N);
  while(N--){
   scanf("0.%[0-9]...\n",x);
   printf("0.%s\n",x);
  }
  return 0;
}
