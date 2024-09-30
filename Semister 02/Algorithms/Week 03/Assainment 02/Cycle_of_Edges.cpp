// Created by M.Mahadi on 2024-09-30 Time:18:19:09
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
const int N = 1e5+10;
int n,m;
int parent[N];
int usize[N];
void dsu_init(int n){
    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
        usize[i] = 1;
    }
    
}

int dsu_find(int n){
    if (parent[n] == -1) return n;
    int leader  = dsu_find(parent[n]);
    parent[n] = leader;
    return leader;
}

void dsu_union(int a, int b){
    int leaderA = dsu_find(a);
    int leaderB = dsu_find(b);

    if (usize[leaderA] > usize[leaderB])
    {
        parent[leaderB] = leaderA;
        usize[leaderA] += usize[leaderB];
    }else
    {
        parent[leaderA] = leaderB;
        usize[leaderB] += usize[leaderA];
    }
}
int main()
{
    fast
    cin>>n>>m;
    int cnt = 0;
    dsu_init(n);
    while (m--)
    {
        int x,y;
        cin>>x>>y;
        int leaderOfX = dsu_find(x); 
        int leaderOfY = dsu_find(y); 
        if (leaderOfX == leaderOfY)
        {
            cnt++;
        }else
        {
            dsu_union(x,y);
        }
        
        
    }
    cout<<cnt;
  return 0;
}
