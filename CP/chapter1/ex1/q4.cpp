#include<cstdio>
#include<algorithm>
#include<set>
#include<iterator>
using namespace std;
int main(){
  int givenArr[] = {1,32,2,4,5,2,4,7,8,9,6,7};
  set<int, less<int> > s;
  for(int i=0;i<12;i++){
    s.insert(givenArr[i]);
  }
  set<int, less<int> > :: iterator itr;
  for(itr = s.begin();itr!=s.end();itr++){
    printf("%d\n",*itr);
  }
  return 0;
}
