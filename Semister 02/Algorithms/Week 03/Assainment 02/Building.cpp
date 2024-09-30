// Created by M.Mahadi on 2024-09-30 Time:22:48:58
#include <bits/stdc++.h>
using namespace std;
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);
#define ll long long int
class Edge
{
public:
    int u;
    int v;
    ll w;
    Edge(int u, int v, ll w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};
const int N = 1e5 + 10;
int n, m;
int parent[N];
int dsize[N];
void dsu_init(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
        dsize[i] = 1;
    }
}
int dsu_find(int n)
{
    if (parent[n] == -1)
        return n;
    int leader = dsu_find(parent[n]);
    parent[n] = leader;
    return leader;
}
bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}
void dsu_union(int a, int b)
{
    int LeaderA = dsu_find(a);
    int LeaderB = dsu_find(b);

    if (dsize[LeaderA] > dsize[LeaderB])
    {
        parent[LeaderB] = LeaderA;
        dsize[LeaderA] += dsize[LeaderB];
    }
    else
    {
        parent[LeaderA] = LeaderB;
        dsize[LeaderB] += dsize[LeaderA];
    }
}
int main()
{

    fast
    cin >>n >> m;
    vector<Edge> edgeList;
    while (m--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edgeList.push_back(Edge(u,v,w));
    }
    dsu_init(n);
    sort(edgeList.begin(), edgeList.end(),cmp);
    ll cost = 0;
    for (Edge i : edgeList)
    {
        int LeaderA = dsu_find(i.u);
        int LeaderB = dsu_find(i.v);
        if (LeaderA == LeaderB)
        {
            continue;
        }else
        {
            dsu_union(i.u,i.v);
            cost+=i.w;    
        }
    }
    int mui_togo_lidar = dsu_find(1);
    bool flag = false;
    for (int i = 1; i <= n; i++)
    {
        if (dsu_find(i) != mui_togo_lidar)
        {
            flag = true;
        }
        
    }
    if (flag)
    {
        cout<<-1<<endl;
    }else
    {
        cout<<cost<<endl;
    }
    
    
    return 0;
}