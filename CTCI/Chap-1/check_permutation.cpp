#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
bool check_permutation(string s1, string s2){
  if(s1.length() != s2.length()){ return false; }
  unordered_map<char, int> mp1;
  unordered_map<char, int> mp2;
  for(const auto i: s1){
    auto result = mp1.find(i);
    if(result == mp1.end()){
      mp1[i] = 1;
    }
    else{
      mp1[i] = mp1[i] + 1;
    }
  }
  for(auto i: s2){
    auto result = mp2.find(i);
    if(result == mp2.end()){
      mp2[i] = 1;
    }
    else{
      mp2[i] = mp2[i] + 1;
    }
  }
  for(auto i=mp1.begin(),j=mp2.begin();i!=mp1.end();i++,j++){
    if(i->second != j->second){
      return false;
    }
  }
  return true;
}

int main(){
  string s = "ajdhqnwldoqodw";
  string s1 = "qwertyuiop";
  string s2 = "abcdef";
  string s3 = "acbdfe";
  cout<<check_permutation(s,s1)<<endl;
  cout<<check_permutation(s2,s3)<<endl;
  return 0;
}
