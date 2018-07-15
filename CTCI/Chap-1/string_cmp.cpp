#include<iostream>
#include<string>
using namespace std;

int string_cmp(const string s1, const string s2){
  if(s1.length() == 0 && s2.length() == 0){ return 0;}
  if(s1.length() == 0){ return 0-s2[0]; }
  if(s2.length() == 0){ return s1[0]; }
  int i = 0,j = 0;
  while(s1[i]!='\0' && s2[i]!='\0'){
    if(s1[i] != s2[i]){ return s1[i] - s2[i]; }
    i++;
  }
  if(s1[i] == '\0' && s2[i] != '\0'){ return 0 - s2[i]; }
  if(s2[i] == '\0' && s1[i] != '\0'){ return s1[i]; }
  
  return 0;
}

int main(){
  string s1 = "abcdefg";
  string s2 = "abcef";
  cout<<string_cmp(s1,s2)<<endl;
  cout<<string_cmp(s1, "")<<endl;
  cout<<string_cmp("", s1)<<endl;
  cout<<string_cmp("","")<<endl;
  return 0;
}
