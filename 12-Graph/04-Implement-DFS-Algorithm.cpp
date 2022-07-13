class Solution {
  public:
    void dfs(vector<int> &ans, vector<int> &visited, vector<int> adj[], int node)
    {
        ans.push_back(node);
        visited[node] = 1;
        
        for(auto it: adj[node])
        {
            if(!visited[it])
                dfs(ans, visited, adj, it);
        }
    }
    
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[])
    {
        // Code here
        vector<int> ans; // to store DFS sequence
        vector<int> visited(V, 0); // mark all nodes as unvisited
        
        dfs(ans, visited, adj, 0); // 0 is passed as dfs is starting from 0 vertex
        
        return ans;
    }
};
