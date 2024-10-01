// Created by M.Mahadi on 2024-10-01 Time:13:56:12
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pub(X) push_back(X)
#define All(X) (X).begin(), (X).end()
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL);
#define vPair vector<pair<int, int>>
#define Pr pair<int, int>
const int N = 1e3+5;
char grid[N][N];
int n,m;
bool vis[N][N];
pair<int,int> parent[N][N];
// vPair d = {{0,1},{0,-1},{-1,0},{1,0}};
vPair d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool valid(int ci, int cj){
    return ci>= 0&& cj>= 0 && ci<n && cj<m;
}
void bfs(int si, int sj){
    vis[si][sj] = true;
    queue<Pr> q;
    q.push({si,sj});
    while (!q.empty())
    {
        Pr pir = q.front(); 
        q.pop();
        int a = pir.first;
        int b = pir.second;

        for (int i = 0; i < 4; i++)
        {
            int ci = a+d[i].first;
            int cj = b+d[i].second;

            if (valid(ci,cj) && !vis[ci][cj] && grid[ci][cj] != '#')
            {
                parent[ci][cj] ={a,b};
                vis[ci][cj] = true;
                q.push({ci,cj});
            }
            
        }
        
    }
    
}
int main()
{
    fast
    cin>>n>>m;
    int si,sj,di,dj;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char a;
            cin>>a;
            grid[i][j] = a;
            if (a == 'D')
            {
                si = i;
                sj = j;
            }
            if (a == 'R')
            {
                di = i;
                dj = j;
            }
            
            
        }
        
    }
    memset(vis,false,sizeof(vis));
    memset(parent,-1,sizeof(parent));
    bfs(si,sj);
    Pr curent = {di,dj};
    if (vis[di][dj])
    {
        while (true)
        {
            int newX = parent[curent.first][curent.second].first;
            int newY = parent[curent.first][curent.second].second;
            curent.first = newX;
            curent.second = newY;
            if (grid[curent.first][curent.second] == 'D')
            {
                break;
            }
            
            grid[newX][newY] = 'X';
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<grid[i][j];
        }cout<<endl;
        
    }
    
    

  return 0;
}