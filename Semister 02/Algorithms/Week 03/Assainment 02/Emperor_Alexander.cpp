// Created by M.Mahadi on 2024-10-01 Time:02:43:47
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define All(X) (X).begin(), (X).end()
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);
const int N = 1e5 + 10;
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
int n, m;

int dsize[N];
int parent[N];
void dsu_init(int n)
{
    for (int i = 1; i <= n; i++)
    {
        dsize[i] = 1;
        parent[i] = -1;
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
void dsu_union(int a, int b)
{
    int LeaderA = dsu_find(a);
    int LeaderB = dsu_find(b);

    if (dsize[LeaderA] > dsize[LeaderB])
    {
        parent[LeaderB] = LeaderA;
        dsize[LeaderA] +=dsize[LeaderB];
    }else
    {
        parent[LeaderA] = LeaderB;
        dsize[LeaderB] +=dsize[LeaderA];
    }
    
}
bool cmp(Edge a, Edge b){
    return a.w < b.w;
}
int main()
{
    fast
    vector<Edge> list;
    cin>>n>>m;
    int all_edge = m;
    dsu_init(n);
    while (m--)
    {
        int u,v,w;
        cin>>u>>v>>w;
        list.push_back(Edge(u,v,w));
    }
    sort(All(list),cmp);
    int use_edge = 0;
    ll min_cost = 0;
    for (Edge i:list)
    {
        int leaderA = dsu_find(i.v);
        int leaderB = dsu_find(i.u);
        if (leaderA == leaderB)
        {
            continue;
        }else
        {
            use_edge++;
            min_cost+=i.w;
            dsu_union(i.u,i.v); 
        }

    }
    int Mui_togo_neta = dsu_find(1);
    bool flag = true;
    for (int i = 2; i <= n; i++)
    {
        if (dsu_find(i) != Mui_togo_neta)
        {
            flag = false;
            break;
        }
        
    }
    if (flag)
    {
       cout<<all_edge-use_edge<<" "<<min_cost;
    }else
    {
        cout<< "Not Possible"<<endl;
    }
    
    
    
    return 0;
}
