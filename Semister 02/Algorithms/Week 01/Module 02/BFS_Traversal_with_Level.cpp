// Created by M.Mahadi on 2024-09-11 Time:17-43-00
#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool vis[1005];
int level[1005];
void BFS(int src){
    queue<int>q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        cout<<par<<" ";
        for (auto i : v[par])
        {
            if (vis[i] == false)
            {
                q.push(i);
                vis[i] = true;
                level[i] = level[par]+1;
            }
            
        }
        
    }
    
}
int main(){
    int n,e;cin>>n>>e;
    while (e--)
    {
        int a,b;cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int src;cin>>src;
    memset(vis,false,1005);
    memset(level,-1,1005);
    BFS(src);
    for (int i = 0; i < n; i++)
    {
        cout<<i<<" : "<<level[i]<<endl;
    }
    
    return 0;
}