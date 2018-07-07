#include<iostream>
#include<vector>
using namespace std;
int main(){
std::vector<int> v(5);
for(vector<int>::iterator it=v.begin();it!=v.end();++it){
cout<<*it<<endl;}
return 0;
}
