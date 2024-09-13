// Created by M.Mahadi on 2024-09-13 Time:05-07-44
#include <bits/stdc++.h>
using namespace std;
int c, r;
const int N = 20;
char grid[N][N];
bool vis[N][N];
vector<pair<int,int>> myV={{0,1},{0,-1},{-1,0},{1,0}};
bool valid(int i, int j)
{
    if (i < 0 || j < 0 || i >= c || j >= r)
        return false;
    return true;
}
void DFS_2d_grid(int si, int sj)
{
    cout << grid[si][sj] << endl;
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = myV[i].first+si;
        int cj = myV[i].second+sj;
        if (valid(ci,cj) == true && vis[ci][cj]==false)
        {
            DFS_2d_grid(ci,cj);
        }
    }
    
    
}
int main()
{
    cin >> c >> r;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cin >> grid[i][j];
        }
    }
    int si, sj;
    cin >> si >> sj;
    memset(vis, false, sizeof(vis));
    DFS_2d_grid(si, sj);
    return 0;
}