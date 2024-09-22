// Created by M.Mahadi on 2024-09-17 Time:18-01-03
#include <bits/stdc++.h>
using namespace std;
const int N = 100;
vector<pair<int, int>> adjList[N];
int dis[N];
void dijkstar(int src)
{
    queue<pair<int, int>> q;
    q.push({src, 0});
    dis[src] = 0;
    while (!q.empty())
    {
        pair<int, int> parent = q.front();
        q.pop();

        int Node = parent.first;
        int Cost = parent.second;

        for (pair<int, int> child : adjList[Node])
        {
            int childNode = child.first;
            int childCost = child.second;

            if (childCost + Cost < dis[childNode])
            {
                dis[childNode] = Cost+childCost;
                q.push({childNode, Cost+childCost});
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adjList[a].push_back({b, c});
        adjList[b].push_back({a, c});
    }

    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }

    dijkstar(0);

    for (int i = 0; i < n; i++)
    {
        cout << i << " -->" << dis[i] << endl;
    }
    return 0;
}
