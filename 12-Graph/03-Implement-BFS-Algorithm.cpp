vector<int> bfsOfGraph(int V, vector<int> adj[]) 
    {
        vector<int> bfs;
        vector<int> vis(V, 0);
        
        queue<int> q;
        q.push(0);
        vis[0] = 1; // mark as visited
                
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            bfs.push_back(node);
                    
            // Find its adjacent neighbours
            for(auto it: adj[node])
            {
                if(!vis[it])
                {
                    q.push(it);
                    vis[it] = 1;
                }
            }
            
        }
        
        return bfs;
    }
};
