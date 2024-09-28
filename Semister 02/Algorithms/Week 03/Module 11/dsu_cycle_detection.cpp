// Created by M.Mahadi on 2024-09-28 Time:18-18-55
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int parent[N];
int dsize[N];
int n, m;
void dsu_initial(int n)
{
    for (int i = 0; i < n; i++)
    {
        dsize[i] = 1;
        parent[i] = -1;
    }
}
int find(int n)
{
    if (parent[n] == -1)
        return n;
    int leader = find(parent[n]);
    parent[n] = leader;
    return leader;
}
int dsu_union_by_size(int a, int b)
{
    int parentA = find(a);
    int parentB = find(b);
    if (dsize[parentA] >= dsize[parentB])
    {
        parent[parentB] = parentA;
        dsize[parentA] += dsize[parentB];
    }
    else if (dsize[parentB] >= dsize[parentA])
    {
        parent[parentA] = parentB;
        dsize[parentB] += dsize[parentA];
    }
    return 0;
}
int main()
{
    cin >> n >> m;
    dsu_initial(n);
    bool  cycle = false;
    int cy[2];
    while (m--)
    {
        int x, y;
        cin >> x >> y;

        int leaderX = find(x);
        int leaderY = find(y);

        if (leaderX == leaderY)
        {
            cycle = true;
            cy[0] = x;
            cy[1] = y;
        }else
        {
            dsu_union_by_size(x,y);
        }

    }

    if (cycle)
    {
        cout<<"Cycle is detected on Node: X->"<<cy[0]<<" Y->"<<cy[1]<<endl;
    }else
    {
        cout<<"Cycle is not detected"<<endl;
    }
    
    

    return 0;
}