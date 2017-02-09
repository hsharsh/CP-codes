#include<bits/stdc++.h>
 
using namespace std;

class Graph{
    private:
        int V;
        list<int> *adj;
        void DFSUtil(int v, bool visited[]);
    public:
        Graph(int V);
        void addEdge(int v, int w);
        void DFS(int v);
};
 
Graph::Graph(int V){
    this->V = V;
    adj = new list<int>[V];
}
 
void Graph::addEdge(int v, int w){
    adj[v].push_back(w);
}
 
void Graph::DFSUtil(int v, bool visited[]){
    visited[v] = true;
    
    cout<<v<<" ";
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFSUtil(*i, visited);
}

void Graph::DFS(int v){
    bool *visited = new bool[V];

    cout<<"Depth first traversal of the graph is:"<<endl;
    DFSUtil(v, visited);
    cout<<endl;
}
 
int main(){
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    g.DFS(0); 
}