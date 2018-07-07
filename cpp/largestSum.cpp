#include<iostream>
#include<vector>
using namespace std;

int largestSum(vector<int> &arr){
 int sum = 0, hereLarge = 0;
 for(auto i:arr){
  hereLarge += i;
  if(hereLarge < 0){ hereLarge = 0;}
  if(sum < hereLarge){ sum = hereLarge;}
 }
 return sum;
}

int main(){
 vector<int> arr = {1,-23,24,-24,4,5,-3,46,2,-1,56,-20};
 int res = largestSum(arr);
 cout<<res<<endl;
 return 0;
}
