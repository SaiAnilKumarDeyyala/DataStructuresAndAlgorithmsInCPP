// Depth First Traversal of a Graph in C++
void dfs(int node,vector<int> & vis, vector<int> adj[], vector<int> &dfsContainer) {
    vis[node] = 1;       
    dfsContainer.push_back(node);    
    for(auto it: adj[node]) {          // Iterate through all the adjacent vertices of node
        if(!vis[it]) {                // If the adjacent vertex is not visited 
            dfs(it,vis,adj,dfsContainer);  // Recursively call dfs on the adjacent vertex
        }
    }
}
vector<int> dfsOfGraph(int V,vector<int> adj[]) {
    vector<int> dfsContainer;       // dfsContainer will contain the nodes in the order of dfs traversal
    vector<int> visited(V+1,0);     // visited[i] is true if vertex i is visited
    for(int i=0;i<=V;i++) {         // Iterate through all the vertices
        if(!visited[i]) {           // If vertex i is not visited
            dfs(i,visited,adj,dfsContainer);     // Call dfs function
        }
    }
    return dfsContainer;
}
