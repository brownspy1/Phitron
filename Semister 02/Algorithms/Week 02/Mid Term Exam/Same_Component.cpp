// Created by M.Mahadi on 2024-09-23 Time:20:38:01
#include <bits/stdc++.h>
using namespace std;
//define
#define ll long long int
#define INF 1e18+5
#define __fast ios_base::sync_with_stdio(false); cin.tie(NULL);
int n,m;
const int V= 1e3+5;
bool vis[V][V];
char grid[V][V];
bool valid(int pi , int pj){
    if (pi>=0 && pj >=0 && pi < n && pj < m)
    {
        return true;
    }return false;
    
}
void bfs(int si,int sj){
    queue<pair<int,int>> q;
    vector<pair<int,int>> co = {{0,1},{0,-1},{-1,0},{1,0}};
    q.push({si,sj});
    vis[si][sj] = true;
    while (!q.empty())
    {
        pair<int,int> parent = q.front();
        q.pop();
        int a = parent.first;
        int b = parent.second;
        for (int i = 0; i < 4; i++)
        {
            int ci = a + co[i].first;
            int cj = b + co[i].second;

            if (valid(ci,cj) && !vis[ci][cj] &&grid[ci][cj]!='-')
            {
                vis[ci][cj] = true;
                q.push({ci,cj});
            }

        }
        
    }
    
}
int main()
{
  __fast;
  cin>>n>>m;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
        cin>>grid[i][j];
    }
    
  }
  memset(vis,false,sizeof(vis));
  int si,sj,di,dj;
  cin>>si>>sj>>di>>dj;
  bfs(si,sj);
  if (vis[di][dj])
  {
    cout<<"YES";
  }else
  {
    cout<<"NO";
  }
  
  
    
  return 0;
}