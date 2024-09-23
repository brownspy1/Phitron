// Created by M.Mahadi on 2024-09-23 Time:22:22:43
#include <bits/stdc++.h>
#define __fast                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long int
using namespace std;
const int V = 1e3 + 5;
ll mtx[V][V];
int v, e;
void Floyd()
{
    for (int k = 1; k <= v; k++)
    {
        for (int i = 1; i <= v; i++)
        {
            for (int j = 1; j <= v; j++)
            {
                if (mtx[i][k] + mtx[k][j] < mtx[i][j])
                {
                    mtx[i][j] = mtx[i][k] + mtx[k][j];
                }
            }
        }
    }
}
int main()
{
    __fast;
    cin >> v >> e;
    for (int i = 1; i <= v; i++)
    {
        for (int j = 1; j <= v; j++)
        {
            if (i == j)
            {
                mtx[i][j] = 0;
            }
            else
            {
                mtx[i][j] = INT32_MAX;
            }
        }
    }

    while (e--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        mtx[a][b] = min(mtx[a][b],c);
    }
    

    int s;
    cin >> s;
    int t;
    cin >> t;
    Floyd();
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (mtx[s][a] <= b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}