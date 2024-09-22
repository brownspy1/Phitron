// Created by M.Mahadi on 2024-09-13 Time:04-46-07
#include <bits/stdc++.h>
using namespace std;
vector<int> adjList[6];
bool vis[6];
void DFS_travars(int src)
{
    cout << src << " ";
    vis[src] = true;
    for (int i : adjList[src])
    {
        if (vis[i] == false)
        {
            DFS_travars(i);
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
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }
    int src;
    cin >> src;
    memset(vis, false, sizeof(vis));
    DFS_travars(src);

    return 0;
}