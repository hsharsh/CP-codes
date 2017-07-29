#include <iostream>
#include <vector>
using namespace std;

vector <int> adj[20];
bool visited[20];
int num;
int dfs(int s, int index) {
    visited[s] = true;
    num++;
    for(int i = 0;i < adj[s].size();++i)    {
     if(visited[adj[s][i]] == false)
        dfs(adj[s][i]);
    }
    return num;
}

void initialize() {
    for(int i = 0;i < 10;++i)
     visited[i] = false;
}

int main() {
    int nodes, edges, x, y, connectedComponents = 0;
    cin >> nodes;                       // Number of nodes
    cin >> edges;                       // Number of edges
    for(int i = 0;i < edges;++i) {
     cin >> x >> y;     
 // Undirected Graph 
     adj[x+1].push_back(y+1);                   // Edge from vertex x to vertex y
     adj[y+1].push_back(x+1);                   // Edge from vertex y to vertex x
    }

    initialize();                           // Initialize all nodes as not visited

    for(int i = 1;i <= nodes;++i) {
     if(visited[i] == false)     {
        num=0;
        cout<<dfs(i)<<endl;
         connectedComponents++;
     }
    }
    cout << "Number of connected components: " << connectedComponents << endl;
    return 0;
}