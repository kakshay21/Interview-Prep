#include<iostream>
#include<queue>
using namespace std;

struct Person{
    int age;
    int height;

    Person(int age, int height)
    :age(age), height(height)
    {
    }
};

int main(){
    auto cmp = [](Person const& p1, Person const &p2){ return p1.height<p2.height;};
    priority_queue<Person, vector<Person>, decltype(cmp)> Q(cmp);
    int arr[3][2] = {{12,133},{11,132},{17,181}};
    for(int i=0;i<3;i++){
        Q.push(Person(arr[i][0],arr[i][1]));
    }
    while(!Q.empty()){
        Person p = Q.top();
        cout<<p.age<<" "<<p.height<<endl;
        Q.pop();
    }

    return 0;
}