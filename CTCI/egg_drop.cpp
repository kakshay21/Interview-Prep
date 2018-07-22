#include<iostream>
#include<vector>
using namespace std;

int min_trail_recursive(int egg, int floor){
 if(egg == 0){ return 0;}
 if(egg == 1){ return floor;}
 int min = 10000;
 for(int i = 0;i<floor;i++){
   int res = 1 + max(min_trail_recursive(egg - 1, i-1), min_trail_recursive(egg, floor-1));
   if(res < min){
    min = res;
  }
 }
 return min;
} 

int min_trial(int egg, int floor){
 vector< vector<int> > tables(egg, floor);
 vecctor<int> table;
 for(int i = 0;i<floor;i++){
  table[i] = i;
 }
 for(int e = 0; e<egg;e++){
  for(int f = 0;f<floor;f++){
   int min=
   for(int k = 0;k<floor;k++)
}

int main(){
 return 0;
}
