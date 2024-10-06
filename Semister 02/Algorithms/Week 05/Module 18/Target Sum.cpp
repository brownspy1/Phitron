// Created by M.Mahadi on 2024-10-06 Time:21-24-28
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];sum+=a[i];
    }
    int diff ;cin>>diff;
    if (((diff+sum)%2!=0) || sum<diff)
    {
        cout<<"NO";
        return 0;
    }
    int tar = (diff+sum)/2;
    int dp[n+1][tar+1];
    dp[0][0] = 1;
    for (int i = 1; i <= sum; i++)
    {
        dp[0][i] = 0;
    }
    for (int i = 1; i <= n; i++){
        for (int j = 0; j <= tar; j++){
                if (a[i-1] <= j)
                {
                    dp[i][j] = (dp[i-1][j-a[i-1]]) + (dp[i-1][j]);
                }else
                {
                    int op = dp[i-1][j];
                    dp[i][j] = op;
                }
                
                
            }
         }
    cout<<dp[n][tar];
    
    
    return 0;
}