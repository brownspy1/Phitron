// Created by M.Mahadi on 2024-09-17 Time:23-26-34
#include <bits/stdc++.h>
using namespace std;
const int N = 1000;
vector<pair<int, int>> adj[N];
int dis[N];
class cmp
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        return a.second > b.second;
    }
};
void dijkstra(int src)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
    pq.push({src, 0});
    dis[src] = 0;

    while (!pq.empty())
    {
        pair<int, int> parent = pq.top();
        pq.pop();

        int Node = parent.first;
        int Cost = parent.second;

        for (pair<int, int> child : adj[Node])
        {
            int ChildNode = child.first;
            int ChildCost = child.second;

            if (ChildCost + Cost < dis[ChildNode])
            {
                dis[ChildNode] = Cost + ChildCost;
                pq.push({ChildNode, dis[ChildNode]});
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
        cin>>a>>b>>c;
        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
    }
    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }
    dijkstra(0);
    for (int i = 0; i < n; i++)
    {
        cout << i << " -->" << dis[i] << endl;
    }

    return 0;
}