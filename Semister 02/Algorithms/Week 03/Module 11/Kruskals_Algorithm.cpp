// Created by M.Mahadi on 2024-09-28 Time:19-44-51
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int parent[N];
int dsize[N];
int n, m;
class Edge
{
public:
    int u;
    int v;
    int w;
    Edge(int u,int v,int w){
        this->u = u;
        this->v = v;
        this->w = w;
    }
};
void dsu_initial(int n)
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
void dsu_union_by_size(int a, int b)
{
    int leaderA = dsu_find(a);
    int leaderB = dsu_find(b);

    if (dsize[leaderA] > dsize[leaderB])
    {
        parent[leaderB] = leaderA;
        dsize[leaderA] += dsize[leaderB];
    }
    else
    {
        parent[leaderA] = leaderB;
        dsize[leaderB] += dsize[leaderA];
    }
}
bool cmp(Edge a, Edge b){
    return a.w < b.w;
    
    
}
int main()
{
    cin >> n >> m;
    int cost = 0;
    dsu_initial(n);
    vector<Edge> edgeList;
    while ( m--)
    {
        int a , b, c;
        cin>>a>>b>>c;
        edgeList.push_back(Edge(a,b,c));
    }
    sort(edgeList.begin(),edgeList.end(),cmp);

    for(Edge i:edgeList){
        int leadA = dsu_find(i.u);
        int leadB = dsu_find(i.v);
        if(leadA == leadB){
            continue;
        }else
        {
            cout<<i.u<<" "<<i.v<<" "<<i.w<<endl;
            dsu_union_by_size(i.u,i.v);
            cost += i.w; 
        }
        
    }

    cout<<cost<<endl;
    
    return 0;
}