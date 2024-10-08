// Created by M.Mahadi on 2024-10-06 Time:18-02-31
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
    if (s % 2 == 0)
    {
        int sum = s/2;
        bool dp[n + 1][sum  + 1];
        dp[0][0] = true;
        for (int i = 1; i <= sum ; i++)
        {
            dp[0][i] = false;
        }

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= sum ; j++)
            {
                if (a[i - 1] <= j)
                {
                    dp[i][j] = (dp[i - 1][j - a[i - 1]]) || (dp[i - 1][j]);
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        if (dp[n][sum])
        {
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        
        // cout<<(dp[n][sum])?"YES":"No";
        
    }
    else
    {
        cout << "NO";
    }

    return 0;
}