// Created by M.Mahadi on 2024-10-07 Time:22-46-43
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    int n, w;
    cin >> n >> w;
    const int N = 1e3 + 5;
    int weight[N], value[N];
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> value[i];
    }
    int dp[N][N];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            
        }
    }
    
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= w; j++)
        {

            if (weight[i - 1] <= j)
            {
                dp[i][j] = max(dp[i - 1][j - weight[i - 1]] + value[i - 1], dp[i - 1][j]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    cout << dp[n][w] << endl;
    }

    return 0;
}