#include<iostream>
#include<vector>
using namespace std;

void get_permute_util(string v, int n){
 if(n < 0){
   return;
 }
 if(n == 0){
  cout<<v<<endl;
  return;
 }
v.append("H");
get_permute_util(v, n-1);
v.pop_back();
v.append("T");
get_permute_util(v, n-1);

}

void get_permute(int n){
 string v = "";
 get_permute_util(v,n);
}

int main(){
 get_permute(4);
 return 0;
}
