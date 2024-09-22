// Created by M.Mahadi on 2024-09-14 Time:11-12-29
#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1000000];
int main()
{
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int q;
    cin >> q;
    while (q--)
    {
        vector<int> conn;
        int x;cin>>x;
        if (adj[x].empty() )
        {
            cout<<-1<<" ";
        }else
        {
            for (int i:adj[x])
        {
            conn.push_back(i);
        }
        }
        
        
        sort(conn.begin(),conn.end(),greater<int>());
        for (int m:conn)
        {
            cout<<m<<" ";
        }
        cout<<endl;
        
    }

    return 0;
}