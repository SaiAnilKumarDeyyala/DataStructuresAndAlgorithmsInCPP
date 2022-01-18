// Breadth First Traversal of a Graph in C++
vector<int>bfsOfGraph(int v,vector<int> adj[]) {
    vector<int> bfs;
    vector<int> visited(v+1,0);    // visited[i] is true if vertex i is visited

    for(int i=0;i<=v;i++) {     // Iterate through all the vertices
        if(!visited[i]) {       // If vertex i is not visited
            queue<int> q;       
            q.push(i);          
            visited[i] = 1;      // if vertex i is pushed into queue, then mark it as visited
            while(!q.empty()) {   
                int node = q.front();    
                q.pop();
                bfs.push_back(node);        
 
                for(auto it: adj[node]) {       // Iterate through all the adjacent vertices of node
                    q.push(it);                // Push the adjacent vertex into the queue
                    visited[it] = 1;           // Mark the adjacent vertex as visited
                } 
            }
        }
    }
    return bfs;
}
