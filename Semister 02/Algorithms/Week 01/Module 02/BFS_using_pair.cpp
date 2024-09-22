// Created by M.Mahadi on 2024-09-11 Time:18-10-07
#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool vis[1005];
void BFS(int src, int lev)
{
    queue<pair<int,int>> Q;
    Q.push({src,0});
    vis[src] = true;
    while (!Q.empty())
    {
        pair<int,int> p = Q.front();
        Q.pop();
        int par = p.first;
        int level = p.second;

        for (auto i : v[par])
        {
            if (!vis[i])
            {
                Q.push({i,level+1});
                vis[i] = true;
            }
            
        }
        if (lev == par)
        {
            cout<<level<<endl;
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
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int src;
    cin >> src;
    memset(vis, false, 1005);
    int level;cin>>level;
    BFS(src, level);

    return 0;
}