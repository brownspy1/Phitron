// Created by M.Mahadi on 2024-09-15 Time:18-55-44
#include <bits/stdc++.h>
using namespace std;
const int N= 1e5;
vector<int> adjlist[N];
bool vis[N];
int parent[N];
bool flage;
void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for (int i : adjlist[par])
        {
            if (vis[i] && parent[par]!=i)
            {
                flage =true;
            }
            
            if (!vis[i])
            {
                vis[i] = true;
                q.push(i);
                parent[i] = par;
            }
            
        }
        
    }
    
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a,b;cin>>a>>b;
        adjlist[a].push_back(b);
        adjlist[b].push_back(a);
    }
    flage = false;
    memset(vis,false,sizeof(vis));
    memset(parent,-1,sizeof(parent));
    
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            bfs(i);
        }
        
    }
    
    if (flage)
    {
        cout<<"Cycle detected";
    }else
    {
        cout<<"Not Cycle detected";
    }
    
    
    return 0;
}