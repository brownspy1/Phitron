// Created by M.Mahadi on 2024-09-13 Time:10-18-21
#include <bits/stdc++.h>
using namespace std;
int r, c;
const int N = 12;
char TwoD[N][N];//stor 2d grid
bool vis[N][N];//for visit track
int level[N][N];//for level track

vector<pair<int, int>> d= {{0, 1}, {0, -1}, {-1, 0}, {1, 0}}; // dane bame upore nice jawar joono co ordinat

bool valid(int ci, int cj) // for validason this cell prasent or not
{
    if (ci < 0 || cj < 0 || ci >= r || cj >= c)
        return false;
    return true;
}
/* travars full 2d grid using
BFS Algoridom(jata dey sortest
dectance a jakono dastinason a jawah jay)*/
void BFS_travars(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    level[si][sj] = 0;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int a = par.first;
        int b = par.second;
        // cout << a << " " << b << endl;
        for (int i = 0; i < 4; i++)
        {
            int ci = a + d[i].first;
            int cj = b + d[i].second;
            if (valid(ci,cj) && !vis[ci][cj])
            {
                q.push({ci,cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[a][b]+1;
            }
            
        }
        
    }
}
int main()
{
    cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> TwoD[i][j];
        }
    }

    int si, sj;
    cin >> si >> sj;
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    BFS_travars(si, sj);
    cout<<level[2][3];
    return 0;
}
