// Created by M.Mahadi on 2024-10-06 Time:17-30-09
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int w;
    cin >> w;
    int dp[n+1][w+1];
    dp[0][0] = 1;
    for (int i = 1; i <= w; i++)
    {
        dp[0][i] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            if (a[i-1] <= j)
            {

                dp[i][j] = (dp[i - 1][j - a[i - 1]]) + (dp[i - 1][j]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout<<dp[n][w];
    return 0;
}