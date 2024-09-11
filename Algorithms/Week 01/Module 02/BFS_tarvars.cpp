// Created by M.Mahadi on 2024-09-11 Time:15-25-50
#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool vis[1005];
void BFS(int src){
    queue<int> par;
    par.push(src);
    vis[src] = true;
    while (!par.empty())
    {
        int parant = par.front();
        par.pop();

        cout<<parant<< " ";
    for (auto i : v[parant])
    {
        if (vis[i] == false)
        {
            par.push(i);
            vis[i] = true;
        }
        
    }
    
    }
    
}
int main(){
    int n,e;
    cin>>n>>e;
    while (e--)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int sourse;cin>>sourse;
    memset(vis,false,sizeof(vis));
    BFS(sourse);
    
    return 0;
}