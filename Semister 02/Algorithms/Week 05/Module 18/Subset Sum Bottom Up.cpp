// Created by M.Mahadi on 2024-10-05 Time:21-06-29
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int w;cin>>w;
    bool dp[n+1][w+1];
    dp[0][0] = true;
    for (int i = 1; i <=w; i++)
    {
        dp[0][i] = false;
    }
     
    for (int i = 1; i <= n; i++){
        for (int j = 0; j <= w; j++){
                if (a[i-1] <= j)
                {
                    int op1 = dp[i-1][j-a[i-1]];
                    int op2 = dp[i-1][j];
                    dp[i][j] = op1 || op2;
                }else
                {
                    int op = dp[i-1][j];
                    dp[i][j] = op;
                }

            }
         }
    // cout<<(dp[n][w]?"YES":"NO"); 
    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= w; j++){
                if (dp[i][j] == true)
                {
                    cout<<"T ";
                }else
                {
                    cout<<"F ";
                }
            }cout<<endl;
         }
    return 0;
}