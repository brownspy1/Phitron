// Created by M.Mahadi on 2024-09-10 Time:13-25-08
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, edge;
    cin >> num >> edge;
    vector<int> adj[num];
    while (edge--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for (int j = 0; j < num; j++)
    {
        cout << j << ": ";
        for (auto &&i : adj[j])
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
