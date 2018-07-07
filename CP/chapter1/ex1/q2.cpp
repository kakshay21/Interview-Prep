#include<cstdio>
#include<cmath>
using namespace std;
int main(){
  double pi = M_PI;
  int decimalPlace;
  scanf("%d",&decimalPlace);
  printf("%.*lf",decimalPlace, pi);
  return 0;
}
