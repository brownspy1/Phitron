// Created by M.Mahadi on 2024-10-05 Time:00-53-39
#include <bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
int dp[N][N];
int Knapsack(int n,int weight[],int value[],int w){
    if (n == 0 || w==0) return 0;
    if (dp[n-1][w] != -1) return dp[n-1][w];
    
    if(weight[n-1] <= w){
        int op1 = Knapsack(n-1,weight,value,w-weight[n-1])+value[n-1];
        int op2 = Knapsack(n-1,weight,value,w);
        dp[n-1][w] = max(op1,op2);
        return max(op1,op2);
    }else
    {
        int op = Knapsack(n-1,weight,value,w);
        dp[n-1][w] = op;
        return op;
    }

}
int main()
{   
    int n, w;
    cin >> n >> w;
    int weight[n], value[n];
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i] >> value[i];
    }
    
    memset(dp,-1,sizeof(dp));
    // init value
    // for (int i = 0; i <= n; i++)
    // {   
    //     for (int j = 0; j <= w; j++)
    //     {
    //         if (i == 0 || j == 0)
    //         {
    //             dp[i][j] = 0;
    //         }
    //     }
    // }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= w; j++)
    //     {
    //         if (weight[i-1] <= j)
    //         {
    //             int op1 = dp[i-1][j-weight[i-1]]+value[i-1];
    //             int op2 = dp[i-1][j];
    //             dp[i][j] = max(op1,op2);
    //         }else
    //         {
    //             int op = dp[i-1][j];
    //             dp[i][j] = op;

    //         }

    //     }
    // }
    
    // cout<<dp[n][w];
    cout<<Knapsack(n,weight,value,w);
    return 0;
}