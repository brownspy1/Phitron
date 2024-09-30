// Created by M.Mahadi on 2024-10-01 Time:01:54:05
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pub(X) push_back(X)
#define pob pop_back
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL);
vector<pair<int,int>> d = {{0,1},{0,-1},{-1,0},{1,0}};
const int N = 1e3+10;
int n,m;
vector<char> adj[N][N];
bool vis[N][N];
vector<int> cnt;
bool valid(int ci,int cj){
    return ci>=0 && cj>=0&& ci<n && cj<m;
}
void bfs(int si, int sj){
    queue<pair<int,int>> pq;
    vis[si][sj];
    pq.push({si,sj});
    int node_cnt;
    while (!pq.empty())
    {
        pair<int,int> par = pq.front();
        pq.pop();
        int a = par.first;
        int b = par.second;

        for (int i = 0; i < 4; i++)
        {
            int ci = a+d[i].first;
            int cj = b+d[i].second;

            if (valid(ci,cj) && !vis[ci][cj] && adj[ci][cj] != '-')
            {
                vis[ci][cj] = true;
                node_cnt ++;
                pq.push({ci,cj});
            }
            
        }
        
    }
    cnt.push_back(node_cnt);
    
}
int main()
{
    fast
    cin>>n>>m;
    memset(vis,false,sizeof(vis));
    while (m--)
    {
        /* code */
    }
    
  return 0;
}