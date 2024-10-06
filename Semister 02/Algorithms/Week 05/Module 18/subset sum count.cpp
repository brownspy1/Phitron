// Created by M.Mahadi on 2024-10-06 Time:17-03-50
#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int subset_sum(int n, int a[], int s)
{
    if (n == 0)
        return (s == 0)?1:0;
    if (dp[n][s] != -1)
        return dp[n][s];
    if (a[n - 1] <= s)
    {
        int op1 = subset_sum(n - 1, a, s - a[n - 1]);
        int op2 = subset_sum(n - 1, a, s);
        dp[n][s] = op1 + op2;
        return op1 + op2;
    }
    else
    {
        int op = subset_sum(n - 1, a, s);
        dp[n][s] = op;
        return op;
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];

    

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int s;
    cin >> s;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            dp[i][j] = -1;
        }
    }
    subset_sum(n, a, s);
    cout << subset_sum(n, a, s) << endl;
    return 0;
}