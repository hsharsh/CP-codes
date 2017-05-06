#include <bits/stdc++.h>
using namespace std;
 
class Graph{
    int V;
    list<int> *adj;
    void fillOrder(int v, bool visited[], stack<int> &Stack);
 
    void DFSUtil(int v, bool visited[], int &count);
public:
    Graph(int V);
    void addEdge(int v, int w); 
    int maxSCC();
    Graph getTranspose();
};
 
Graph::Graph(int V){
    this->V = V;
    adj = new list<int>[V];
}
 
void Graph::DFSUtil(int v, bool visited[],int &count){
    visited[v] = true;
    count++;
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFSUtil(*i, visited,count);
}
 
Graph Graph::getTranspose(){
    Graph g(V);
    for (int v = 0; v < V; v++){
        list<int>::iterator i;
        for(i = adj[v].begin(); i != adj[v].end(); ++i){
            g.adj[*i].push_back(v);
        }
    }
    return g;
}
 
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}
 
void Graph::fillOrder(int v, bool visited[], stack<int> &Stack){
    visited[v] = true;
 
    list<int>::iterator i;
    for(i = adj[v].begin(); i != adj[v].end(); ++i)
        if(!visited[*i])
            fillOrder(*i, visited, Stack);
 
    Stack.push(v);
}
 
int Graph::maxSCC(){
    stack<int> Stack;
 
    bool *visited = new bool[V];
    for(int i = 0; i < V; i++)
        visited[i] = false;
 
    for(int i = 0; i < V; i++)
        if(visited[i] == false)
            fillOrder(i, visited, Stack);
 
    Graph gr = getTranspose();
 
    for(int i = 0; i < V; i++)
        visited[i] = false;
    
    int maxcount=0;
    while (Stack.empty() == false){
        int v = Stack.top();
        Stack.pop();
 
        if (visited[v] == false){
            int count=0;
            gr.DFSUtil(v, visited,count);
            maxcount = max(count,maxcount);
        }
    }
    return maxcount;
}
 
int main()
{
    Graph g(5);
    g.addEdge(1, 0);
    g.addEdge(0, 2);
    g.addEdge(2, 1);
    g.addEdge(0, 3);
    g.addEdge(3, 4);
 
    cout<<g.maxSCC()<<endl;
 
    return 0;
}