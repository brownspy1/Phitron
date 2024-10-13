// Created by @brownspy1 on 2024-10-12 Time:19-26-54
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int weight[n], value[n];
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> value[i];
    }
    int w;
    cin >> w;
    int dp[n+1][w+1];
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
            if (weight[i-1] <= j)
            {
                dp[i][j] = max(dp[i][j-weight[i-1]]+value[i-1],dp[i-1][j]);
            }else
            {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= w; j++){
                cout<<dp[i][j]<<" ";
            }cout<<endl;
         }
    return 0;
}