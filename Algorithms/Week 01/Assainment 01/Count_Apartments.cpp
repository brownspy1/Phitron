// Created by M.Mahadi on 2024-09-14 Time:18-30-51
#include <bits/stdc++.h>
using namespace std;
int adj[1001][1001];
bool vis[1001][1001];
vector<pair<int, int>> coordinat = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool val(int i, int j, int cx, int cy)
{
    if (cx > 0 && cy > 0 && cx < i && cy < j)
        return true;
    return false;
}
void bfs(int i, int j)
{
    queue<pair<int,int>>q;
    
}
int main()
{
    int r, c;
    cin >> r >> c;
    int sx = -1, sy = -1;
    bool flag = true;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> adj[i][j];
            if (adj[i][j] == '.' && flag)
            {
                sx = i;
                sy = j;
                flag = false;
            }
        }
    }

    return 0;
}