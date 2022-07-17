
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // DFS TRAVERSAL
    void findTopo(int node, vector<int> &vis, vector<int> adj[], stack<int> &st)
    {
        vis[node] = 1;

        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                findTopo(it, vis, adj, st);
            }
        }

        // After the dfs call is over put it in stack
        st.push(node);
    }
    // Function to return list containing vertices in Topological order.
    vector<int> topoSort(int V, vector<int> adj[])
    {
        // code here
        vector<int> vis(V, 0);
        stack<int> st;

        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                findTopo(i, vis, adj, st);
            }
        }

        vector<int> ans;
        while (!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }

        return ans;
    }
};
