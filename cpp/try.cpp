#include<iostream>
#include<iterator>
using namespace std;
int main(){
  int arr[] = {1,12453,242,667,899,325,1435,6,633,3};
  copy ( arr,arr+10, ostream_iterator<int>( cout, "\t"));
  return 0;
}
