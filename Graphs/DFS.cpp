#include<iostream>
#include<vector>

using namespace std;

void dfs(int node, vector<int> adj[], int vis[], vector<int> &ls){
    vis[node] = 1;
    ls.push_back(node);
    for(auto it : adj[node]){
        if(!vis[it])
        {
            dfs(it,adj,vis,ls);
        }
    }

}

vector<int> dfsOfGraph(int N, vector<int> adj[]){
    int vis[N] = {0};
    int start = 0;
    vector<int> ls;
    dfs(start,adj,vis,ls);
    return ls;
}


int main() {
    int V, E;
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    vector<int> adj[V];

    cout << "Enter the edges (u v):" << endl;
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // For undirected graph
    }

    vector<int> result = dfsOfGraph(V, adj);
    cout << "DFS Traversal: ";
    for (int node : result) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}