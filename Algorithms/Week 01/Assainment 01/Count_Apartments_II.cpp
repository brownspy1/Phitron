// Created by M.Mahadi on 2024-09-14 Time:18-30-51
#include <bits/stdc++.h>
using namespace std;
char adj[1001][1001];
bool vis[1001][1001];
vector<pair<int, int>> co = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool val(int i, int j, int cx, int cy)
{
    if (cx >= 0 && cy >= 0 && cx < i && cy < j)
        return true;
    return false;
}
int  bfs(int i, int j,int r,int c)
{
    int cnt = 1;
    queue<pair<int, int>> q;
    q.push({i, j});
    vis[i][j] = true;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int a = par.first;
        int b = par.second;
        for (int k = 0; k < 4; k++)
        {
            int cx = a + co[k].first;
            int cy = b + co[k].second;
            if (val(r,c,cx,cy) && !vis[cx][cy] && adj[cx][cy]=='.')
            {
                cnt++;
                q.push({cx,cy});
                vis[cx][cy] = true;
            }
            
        }
    }
    return cnt;
}
int main()
{
    int r, c;
    cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> adj[i][j];
        }
    }
    vector<int>apt;
    memset(vis, false, sizeof(vis));
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (adj[i][j] == '.' && !vis[i][j])
            {
                int a = bfs(i,j,r,c);
                apt.push_back(a);
            }
            
            
        }
        
    }
    if (apt.empty())
    {
        cout<<0;
    }
    
    sort(apt.begin(),apt.end());
    for (auto &&i : apt)
    {
        cout<<i<<" ";
    }
    
    return 0;
}
