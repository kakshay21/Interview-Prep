#include<iostream>
#include<list>
using namespace std;

class Graph{
 int v;
 list<int> *adj;
 public:
 Graph(int v);
 void add_vertices(int v, int b);
 void DFS(int v);
 void DFSUtil(int v, bool visited[]);
};

Graph::Graph(int v){
 this->v = v;
 adj = new list<int>[v];
}

void Graph::add_vertices(int v, int b){
 adj[v].push_back(b);
}

void Graph::DFS(int v){
 bool* visited = new bool[this->v];
 for(int i=0;i<v;i++){
  visited[i] = false;
 }
 DFSUtil(v, visited);
}

void Graph::DFSUtil(int v, bool visited[]){
 visited[v] = true;
 cout<<v<<" ";
 for(auto i= adj[v].begin();i!=adj[v].end();i++){
  if(!visited[*i]){
   DFSUtil(*i, visited);
  }
 }
}

int main(){
 Graph g(4);
 g.add_vertices(0,1);
 g.add_vertices(0,2);
 g.add_vertices(1,2);
 g.add_vertices(2,0);
 g.add_vertices(2,3);
 g.add_vertices(3,3);
 g.DFS(2);
 return 0;
}
