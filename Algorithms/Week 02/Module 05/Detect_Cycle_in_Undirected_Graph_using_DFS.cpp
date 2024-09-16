// Created by M.Mahadi on 2024-09-15 Time:20-14-20
#include <bits/stdc++.h>
using namespace std;
const int N= 1e5;
vector<int> adjlist[N];
bool vis[N];
int parentArry[N];
bool flage;
void dfs(int parent){
    vis[parent] = true;
    for (int child : adjlist[parent])
    {
        if (vis[child] && parentArry[parent] != child)
        {
            flage = true;
        }
        
        if (!vis[child])
        {
            // vis[child] = true;
            parentArry[child] = parent;
            dfs(child);
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
    memset(parentArry,-1,sizeof(parentArry));
    
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
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