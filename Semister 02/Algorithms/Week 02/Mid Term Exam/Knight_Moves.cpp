// Created by M.Mahadi on 2024-09-23 Time:20:38:01
#include <bits/stdc++.h>
using namespace std;
// define
#define ll long long int
#define INF 1e18 + 5
#define __fast                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int n, m;
const int V = 100;
bool vis[V][V];
int dis[V][V];
bool valid(int pi, int pj)
{
    if (pi >= 0 && pj >= 0 && pi < n && pj < m)
    {
        return true;
    }
    return false;
}
void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    vector<pair<int, int>> co = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] =0;
    while (!q.empty())
    {
        pair<int, int> parent = q.front();
        q.pop();
        int a = parent.first;
        int b = parent.second;
        for (int i = 0; i < 8; i++)
        {
            int ci = a + co[i].first;
            int cj = b + co[i].second;

            if (valid(ci, cj) && !vis[ci][cj])
            {
                vis[ci][cj] = true;
                q.push({ci, cj});
                dis[ci][cj] = dis[a][b] + 1;
            }
        }
    }
}
int main()
{
    __fast;
    int t;
    cin >> t;
    while (t--)
    {

        cin >> n >> m;
        memset(vis, false, sizeof(vis));
        memset(dis, -1, sizeof(dis));
        int ki, kj, qi, qj;
        cin >> ki >> kj >> qi >> qj;
        bfs(ki, kj);
        if (vis[qi][qj])
        {
            cout<<dis[qi][qj]<<endl;
        }else
        {
            cout<<"-1"<<endl;
        }
        
        
    }

    return 0;
}