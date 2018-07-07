#include<iostream>
#include<list>
using namespace std;

class Graph {
private:
    int v;
    list<int>* adj;
public:
    Graph(int V);
    void addEdge(int v, int w);
    void DFS(int s);
};

Graph::Graph(int V){
    this->v = V;
    this->adj = new list<int>(V);
}

void Graph::addEdge(int v, int w){
    this->adj[v].push_back(w);
}

void Graph::DFS(int s){
    bool *visited = new bool[this->v];
    for(int i=0;i<this->v;i++){
        visited[i] = false;
    }
    
}

int main(){
    return 0;
}