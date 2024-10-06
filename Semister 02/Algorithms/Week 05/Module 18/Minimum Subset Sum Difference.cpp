// Created by M.Mahadi on 2024-10-06 Time:19-57-32
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    bool dp[n][s];
    dp[0][0] = true;
    for (int i = 1; i <= s; i++)
    {
        dp[0][i] = false;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            if (a[i - 1] <= j)
            {
                dp[i][j] = dp[i - 1][j - a[i - 1]] || dp[i - 1][j];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    // add in vector
    vector<int> v;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            if (dp[i][j])
            {
                v.push_back(j);
            }
        }
    }
    int ans= INT_MAX;
    for (int i : v)
    {
        int s1 = i;
        int s2 = s-s1;
        ans = min(ans, abs(s1-s2));
    }
    cout<<ans;
    
    return 0;
}