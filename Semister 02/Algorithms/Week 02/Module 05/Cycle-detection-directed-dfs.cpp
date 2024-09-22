// Created by M.Mahadi on 2024-09-16 Time:06-46-32
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
vector<int> adjlist[N];
bool vis[N];
bool visPath[N];
bool ans;
void dfs(int parent)
{
    vis[parent] = true;
    visPath[parent] = true;
    for (int child : adjlist[parent])
    {
        if (visPath[child])
        {
            ans =true;
        }
        
        if (!vis[child])
        {
            dfs(child);
        }
        visPath[child] = false;
    }
    
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adjlist[a].push_back(b);
    }
    memset(vis, false, sizeof(vis));
    memset(visPath, false, sizeof(visPath));
    ans = false;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }
    if (ans) cout<<"Detected";
    else cout<<"Not detected";
    
    return 0;
}