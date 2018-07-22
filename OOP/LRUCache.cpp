#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>
using namespace std;

struct Node{
   Node* next;
   Node* prev;
   int value;
   int key;
   Node(Node* p, Node* n, int k, int val):prev(p),next(n),key(k),value(val){};
   Node(int k, int val):prev(NULL),next(NULL),key(k),value(val){};
};

class Cache{
   
   protected: 
   map<int,Node*> mp; //map the key to the node in the linked list
   int cp;  //capacity
   Node* tail; // double linked list tail pointer
   Node* head; // double linked list head pointer
   virtual void set(int, int) = 0; //set function
   virtual int get(int) = 0; //get function

};

class LRUCache:public Cache{
    public:
    LRUCache(int capacity){
        cp = capacity;
        this->head = NULL;
        this->tail = NULL;
    }
    int get(int key){
        auto itr = mp.find(key);
        if(itr != mp.end()){
            auto node = mp[key];
            return node->value;
        }
        else{
            return -1;
        }
    }
    
    void set(int key, int value){
        if(mp.size()> this->cp){
            cout<<"oversize!"<<endl;
        }
        else if(mp.size() == this->cp){
            if(get(key) == -1){  // cache miss
                auto tmp = tail;
                int prekey = tmp->key;
                this->tail = tail->prev;
                tmp->prev->next = NULL;
                auto itr = mp.find(prekey);
                mp.erase(itr);
                auto newNode = new Node(key, value);
                newNode->prev = tail;
                this->tail = newNode;
                mp[key] = newNode;
            }
            else{  // cache hit
                auto foundNode = mp[key];
                while(foundNode != this->head){
                    auto prevNode = foundNode->prev;
                    foundNode->prev = prevNode->prev;
                    prevNode->next = foundNode->next;
                    prevNode->prev = foundNode;
                    foundNode->next = prevNode;                    
                }
                this->tail = head;
                while(tail->next != NULL){
                    this->tail = tail->next;
                }
                mp[key] = foundNode;
            }
        }
        else if(mp.size() < this->cp){
            if(head == NULL){
                auto newNode = new Node(key, value);
                this->head = newNode;
                this->tail = newNode;
                newNode->prev = this->head;
                this->mp[key] = newNode;
            }
            else{
                auto newNode = new Node(key, value);
                newNode->next = this->head;
                this->head->prev = newNode;
                this->head = newNode;
                this->mp[key] = newNode;
            }
        }
    }
};

int main() {
   int n, capacity,i;
   cin >> n >> capacity;
   LRUCache l(capacity);
   for(i=0;i<n;i++) {
      string command;
      cin >> command;
      if(command == "get") {
         int key;
         cin >> key;
         cout << l.get(key) << endl;
      } 
      else if(command == "set") {
         int key, value;
         cin >> key >> value;
         l.set(key,value);
      }
   }
   return 0;
}
