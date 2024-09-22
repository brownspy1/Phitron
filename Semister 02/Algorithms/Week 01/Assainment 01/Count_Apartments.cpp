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
void bfs(int i, int j,int r,int c)
{
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
            if (val(r,c,cx,cy) && !vis[cx][cy] && adj[cx][cy]!='#')
            {
                q.push({cx,cy});
                vis[cx][cy] = true;
            }
            
        }
    }
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
    memset(vis, false, sizeof(vis));
    int count = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (adj[i][j] == '.' && !vis[i][j])
            {
                bfs(i,j,r,c);
                count++;
            }
            
        }
        
    }
    cout<<count;
    return 0;
}
