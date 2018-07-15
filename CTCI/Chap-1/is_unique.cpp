#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
bool is_unique(string s){
  unordered_map<char, int> mp;
  for(const auto i: s){
    auto result = mp.find(i);
    if(result == mp.end()){
      mp[i] = 1;
    }
    else{
      mp[i] = mp[i] + 1;
    }
  }
  for(const auto j:mp){
    if(j.second != 1){
      return false;
    }
  }
  return true;
} 

int main(){
  string s = "ajdhqnwldoqodw";
  string s1 = "qwertyuiop";
  cout<<is_unique(s)<<endl;
  cout<<is_unique(s1)<<endl;
  return 0;
}
