// Created by M.Mahadi on 2024-09-20 Time:08-30-32
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{

public:
    bool vis[100000];
    bool path[100000];
    bool flag;
    void dfs(int src, vector<int> adj[])
    {
        vis[src] = true;
        path[src] = true;
        for (int i : adj[src])
        {
            if (vis[i] && path[i])
            {
                flag = true;
            }
            if (!vis[i])
            {
                dfs(i, adj);
            }
        }
        path[src] = false;
    }
    bool isCyclic(int V, vector<int> adj[])
    {
        memset(vis, false, sizeof(vis));
        memset(path, false, sizeof(path));
        flag = false;
        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                dfs(i, adj);
            }
        }
        return flag;
    }
};

//{ Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
