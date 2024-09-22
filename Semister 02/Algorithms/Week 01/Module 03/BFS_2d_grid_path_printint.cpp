// Created by M.Mahadi on 2024-09-13 Time:10-18-21
#include <bits/stdc++.h>
using namespace std;
int r, c;
const int N = 12;
char TwoD[N][N]; // stor 2d grid
bool vis[N][N];  // for visit track
int level[N][N]; // for level track
pair<int,int> parent[N][N];

// vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0},{-1,1},{-1,-1},{1,1},{1,-1}}; // dan bam upor nic uporer cornar nicer cornar
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}}; // dan bam upor nic

bool valid(int ci, int cj)
{
    if (ci < 0 || cj < 0 || ci >= r || cj >= c)
        return false;
    return true;
}

void BFS_travars(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    level[si][sj] = 0;
    parent[si][sj] = {-1,-1};
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int a = par.first;
        int b = par.second;
        for (int i = 0; i < 8; i++)
        {
            int ci = a + d[i].first;
            int cj = b + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[a][b] + 1;
                parent[ci][cj] = {a,b};
            }
        }
    }
}
void path_print(int si, int sj, int di, int dj)
{
    vector<int> pathe;
    pair<int,int> carent = {di,dj};
    while (carent != make_pair(-1,-1))
    {
        pathe.push_back(TwoD[carent.first][carent.second]);
        carent = parent[carent.first][carent.second];
    }
    reverse(pathe.begin(),pathe.end());
    for(char i:pathe){
        cout<<"-->"<<i;
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
    int di,dj;cin>>di>>dj;
    path_print(si,sj,di,dj);
    return 0;
}
