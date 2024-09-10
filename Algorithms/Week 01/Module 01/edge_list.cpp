// Created by M.Mahadi on 2024-09-10 Time:17-19-09
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,e;
    cin>>n>>e;
    vector<pair<int,int>> v;
    while (e--)
    {
        int a,b;cin>>a>>b;
        v.push_back({a,b});
    }
    for (auto &&i : v)
    {
        cout<<i.first<<"<-->"<<i.second<<endl;
    }
    
    
    return 0;
}