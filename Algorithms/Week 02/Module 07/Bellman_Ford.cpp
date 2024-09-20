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
vector<edge> edgeList[N];
int dis[N];
void Bellman_ford(int src, vector<edge> list)
{
    dis[0] = 0;
}
int main()
{

    return 0;
}