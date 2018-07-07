#include <iostream>
using namespace std;
int main(int argc, char** argv) {
  auto i = 2.234;
  auto d = 2;
  cout<<"short : "<<sizeof( short)<<" bytes"<<endl;
  cout<<"char : "<<sizeof( char )<<" bytes"<<endl;
  cout<<"int : "<<sizeof( int ) <<" bytes"<<endl;
  cout<<"int (auto): "<<sizeof(d)<<" bytes"<<endl;
  cout<<"float (auto) : "<<sizeof( i )<<" bytes"<<endl;
  cout<<"float :"<<sizeof( float ) <<" bytes"<<endl;
  cout<<"long : "<<sizeof( long) <<" bytes"<<endl;
  cout<<"long long: "<<sizeof( long long)<<" bytes"<<endl;
  return 0;
}
