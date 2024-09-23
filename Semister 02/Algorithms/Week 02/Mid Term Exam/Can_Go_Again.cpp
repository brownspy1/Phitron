
// Created by M.Mahadi on 2024-09-20 Time:19-10-29
#include <bits/stdc++.h>
using namespace std;
#define __fast                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long int
ll INF = 1e18;
class edge
{
public:
    int first;
    int second;
    ll third;
    edge(int a, int b, ll c)
    {
        first = a;
        second = b;
        third = c;
    }
};
const int N = 1e5+5;
vector<edge> edgeList;
int n,e;
ll dis[N];
void Bellman_ford(int n,vector<edge> list,int s)
{
    dis[s] = 0; 
    for (int i = 1; i <= n-1; i++)
    {
       for (edge child : list)
       {
            int a = child.first; // connection 1
            int b = child.second; // connection 2
            int c = child.third; // cost
            if (dis[a] < INF && dis[a]+c < dis[b])
            {
                dis[b] = dis[a]+c;
            }
       }
       
    }

}
bool cycle(vector<edge> ls)
{
    for (edge i : ls)
    {
        int a = i.first;
        int b = i.second;
        int c = i.third;

        if (dis[a] < INF && dis[a] + c < dis[b])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    __fast
    cin>>n>>e;
    while (e--)
    {
        int a,b,c;cin>>a>>b>>c;
        edgeList.push_back(edge(a,b,c));
    }
    for (int i = 1; i <= n; i++)
    {
        dis[i] = INF;
    }
    
    int s;
    cin >> s;
    Bellman_ford(n,edgeList,s);
    int t;
    cin >> t;
    if (cycle(edgeList))
    {
        cout << "Negative Cycle Detected" << endl;
        return 0;
    }

    while (t--)
    {
        int a;
        cin >> a;

        if (dis[a] != INF)
        {
            cout << dis[a] << endl;
        }
        else
        {
            cout << "Not Possible" << endl;
        }
    }

    return 0;
}
    
