// Created by M.Mahadi on 2024-09-20 Time:19-10-29
#include <bits/stdc++.h>
using namespace std;
class edge
{
public:
    int first;
    int second;
    int third;
    edge(int a, int b, int c)
    {
        first = a;
        second = b;
        third = c;
    }
};
const int N = 1e5;
vector<edge> edgeList;
int dis[N];
void Bellman_ford(int n,vector<edge> list)
{
    dis[0] = 0; 
    for (int i = 0; i < n-1; i++)
    {
       for (edge child : list)
       {
            int a = child.first; // connection 1
            int b = child.second; // connection 2
            int c = child.third; // cost
            if (dis[a] < INT_MAX && dis[a]+c < dis[b])
            {
                dis[b] = dis[a]+c;
            }
       }
       
    }
    
    

}
int main()
{
    int n,e;cin>>n>>e;
    while (e--)
    {
        int a,b,c;cin>>a>>b>>c;
        edgeList.push_back(edge(a,b,c));
        // edgeList.push_back(edge(b,a,c));
    }
    for (int i = 0; i < N; i++)
    {
        dis[i] = INT_MAX;
    }
    Bellman_ford(n,edgeList);
    for (int i = 0; i < n; i++)
    {
        cout<<i<<"-->"<<dis[i]<<endl;
    }
    

    return 0;
}