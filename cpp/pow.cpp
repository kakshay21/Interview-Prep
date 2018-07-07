#include<iostream>
using namespace std;
double pow(double a, int n){
    if(a == 1) return a;
    if(n == 0) return 1;
    if(n == 1) return a;
    double t = pow(a, n/2);
    return t*t*pow(a, n%2);
}
int main(){
    double a = 11;
    int n = 15;
    double result = pow(a,n);
    printf("%lf",result);
    return 0;
}
