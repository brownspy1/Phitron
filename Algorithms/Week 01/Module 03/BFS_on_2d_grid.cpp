// Created by M.Mahadi on 2024-09-13 Time:10-18-21
#include <bits/stdc++.h>
using namespace std;
const int N = 10;
vector<int> bfs_adj[N];
bool vis[N];
int level[N];
void BFS_travars(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] =0;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        cout<<par<<" ";
        for(int val:bfs_adj[par]){
            if (!vis[val])
            {
                q.push(val);
                vis[val] = true;
                level[val] = level[par]+1;
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
        int a, b;
        cin >> a >> b;
        bfs_adj[a].push_back(b);
        bfs_adj[b].push_back(a);
    }
    int src;
    cin >> src;
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(vis));
    BFS_travars(src);
    // for(int i = 0; i< N;i++){
    //     cout<<i<<" : "<<level[i]<<endl;
    // }
    return 0;
}