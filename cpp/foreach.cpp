#include<iostream>
#include<vector>
using namespace std;
int main(){
 vector<int> numbers = {1,2,3,4,5,6,7,8,9,10};
 int sum = 0;
 for(auto n: numbers){
  sum += n;
 }
 cout<<sum<<endl;   
 return 0;
}
