// Created by M.Mahadi on 2024-09-28 Time:00:29:41
#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
const int N = 1e3 + 5;
char grid[N][N];
bool vis[N][N];
int n, m;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int ci, int cj)
{
    return ci >= 0 && cj >= 0 && ci < n && cj < m;
}
void dfs(int si, int sj)
{
    vis[si][sj] = true;
}
int main()
{
    fast
            cin >>
        n >> m;
    int xi, xj, yi, yj;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'A')
            {
                xi = i;
                xj = j;
            }
            else if (grid[i][j] == 'B')
            {
                yi = i;
                yj = j;
            }
        }
    }

    return 0;
}