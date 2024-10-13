// Created by @brownspy1 on 2024-10-11 Time:16-05-41
#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int unbounded_knapsack(int n, int weight[], int value[], int w)
{
    if (n == 0 || w == 0)
        return 0;
    if (dp[n][w] != -1)
        return dp[n][w];
    if (weight[n - 1] <= w)
    {
        dp[n][w] = max(unbounded_knapsack(n, weight, value, w - weight[n - 1]) + value[n - 1],
                       unbounded_knapsack(n - 1, weight, value, w));
        return dp[n][w];
    }
    else
    {
        dp[n][w] = unbounded_knapsack(n - 1, weight, value, w);
        return dp[n][w];
    }
};
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
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            dp[i][j] = -1;
        }
    }
    cout << unbounded_knapsack(n, weight, value, w);

    return 0;
}