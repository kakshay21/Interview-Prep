#include<iostream>
#include<vector>
#include<string>
using namespace std;
string string_compression(const string s){
  vector<char> final;
  int i=0;
  int j = i+1;
  while(j<=s.length()){
    if(s[i] == s[j]){ j++;}
    else{
      final.push_back(s[i]);
      int count = j-i;
      string number = to_string(count);
      final.push_back(number[0]);
      i = j;
      j++;
   }
  }
  string s2(final.begin(), final.end());
  return s2;
}
int main(){
  string s1 = "aabbcdddeeeea";
  string s2 = "abcdaa";
  cout<<s1<<" becomes "<<string_compression(s1)<<endl;
  cout<<s2<<" becomes "<<string_compression(s2)<<endl;
  return 0;
}
