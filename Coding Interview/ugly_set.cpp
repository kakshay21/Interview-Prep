#include<iostream>
#include<unordered_set>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
int main(){
    int N, M, D;
    cin>>N>>M>>D;
    vector<int> arr;
    for(int i=0;i<M;i++){
        int k;
        cin>>k;
        arr.push_back(k);
    }
    vector<int> arr1 = arr;
    sort(arr1.begin(), arr1.end());
    while(arr1.size() > N){
        arr1.pop_back();
    }
    cout<<"Size of arr1 "<<arr1.size()<<endl;
    unordered_set<int> s;
    for(auto n : arr1){
        for(int i = 0;i<N;i++){
            if( n + arr1[i] > D){
                s.insert(arr1[i]);
            }
        }
        cout<<s.size()<<endl;
    }
    for(int i=0;i<M;i++){
        unordered_set<int>::iterator itr = s.find(arr[i]);
        if(itr != s.end()){
            cout << arr[i]<<" ";
        }
    }
    
    return 0;
}