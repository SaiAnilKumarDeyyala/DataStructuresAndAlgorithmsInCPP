// Graph Representaiton in C++ by Adjacent matrix method
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;   // n is the number of vertices and m is the number of edges
    cin>>n>>m;
    int adj[n+1][n+1];    // Adjacent matrix
    for(int i=0;i<m;i++) {     
        int u,v;          // u and v are the vertices of the edge
        cin>>u>>v;          
        adj[u][v] = 1;    // Set the edge between u and v
        adj[v][u] = 1;     // Set the edge between v and u
    }
    return 0;
}


// Graph Representaiton in C++ by Adjacent List method
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m; // n is the number of vertices and m is the number of edges
    cin>>n>>m;
    vector<int> adj[n]; // adj is the adjacency list
    for(int i=0;i<m;i++) {
        int u,v;      // u and v are the vertices of the edge
        cin>>u>>v;
        adj[u].push_back(v);   // Add v to the adjacency list of u
        adj[v].push_back(u);   // Add u to the adjacency list of v
    }
    return 0;
}


// Weighted Graph Representaiton in C++ by Adjacent List method
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m; // n is the number of vertices and m is the number of edges
    cin>>n>>m;
    vector<pair<int,int>> adj[n]; // adj is the adjacency list
    for(int i=0;i<m;i++) {
        int u,v,w;      // u is the source vertex, v is the destination vertex and w is the weight
        cin>>u>>v>>w;
        adj[u].push_back({v,w});   // Add v and w to the adjacency list of u
        adj[v].push_back({u,w});   // Add u and w to the adjacency list of v
    }
    return 0;
}

