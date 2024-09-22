// Created by M.Mahadi on 2024-09-14 Time:11-27-18
#include <bits/stdc++.h>
using namespace std;
char adj[1000][1000];
bool vis[1000][1000];
int r, c;
bool valid(int r, int c, int x, int y)
{
    if (x >= 0 && y >= 0 && x < r && y < c )
        return true;
    return false;
}
void bfs(int sx, int sy)
{
    int x[4] = {0, 0, -1, 1}; // {0,1},{0,-1},{-1,0},{1,0}
    int y[4] = {1, -1, 0, 0};
    queue<pair<int, int>> q;
    q.push({sx, sy});
    vis[sx][sy] = true;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int a = par.first;
        int b = par.second;
        for (int i = 0; i < 4; i++)
        {
            int cx = a + x[i];
            int cy = b + y[i];
            if (valid(r, c, cx, cy) && !vis[cx][cy] && adj[cx][cy] != '#')
            {
                q.push({cx, cy});
                vis[cx][cy] = true;
            }
        }
    }
}
int main()
{
    cin >> r >> c;
    int sx = -1, sy = -1, ex = -1, ey = -1;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> adj[i][j];
            if (adj[i][j] == 'A')
            {
                sx = i;
                sy = j;
            }
            else if (adj[i][j] == 'B')
            {
                ex = i;
                ey = j;
            }
        }
    }
    memset(vis, false, sizeof(vis));
    bfs(sx,sy);
    if (vis[ex][ey])
    {
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    
    return 0;
}