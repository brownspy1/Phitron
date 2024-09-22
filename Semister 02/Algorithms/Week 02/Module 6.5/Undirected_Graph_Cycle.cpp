// Created by M.Mahadi on 2024-09-20 Time:07-56-12
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // const int N = 100000;
    bool vis[100000];
    int parent[100000];
    bool flag = false;
    bool dfs(int src, vector<int> adj[])
    {
        vis[src] = true;
        for (int i : adj[src])
        {
            if (vis[i] && parent[src]!=i)
            {
                flag = true;
            }
            
            if (!vis[i])
            {
                parent[i] = src;
                dfs(i,adj);
            }
        }
    }
    bool isCycle(int V, vector<int> adj[])
    {
        memset(vis,false,sizeof(vis));
        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                dfs(i,adj);
            }
            
        }
        return flag;
    }
};

//{ Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends