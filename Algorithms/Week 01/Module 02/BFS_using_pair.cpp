// Created by M.Mahadi on 2024-09-11 Time:18-10-07
#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool  vis[1005];
void BFS(int src){

}
int main(){
    int n,e;cin>>n>>e;
    while (e--)
    {
        int a,b;cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int src;cin>>src;
    memset(vis,false,1005);;
    BFS(src);
    


    return 0;
}