// Created by M.Mahadi on 2024-10-05 Time:20-35-10
#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
bool subset_sum(int n,int a[],int s){
    if (n == 0) return s==0; //return s==0?true:false
    if (dp[n][s] != -1) return  dp[n][s];
    if (s >= a[n-1])
    {
        int op1 = subset_sum(n-1,a,s-a[n-1]);
        int op2 = subset_sum(n-1,a,s);
        dp[n-1][s] = op1||op2;
        return  op1||op2;
    }else
    {
        int op = subset_sum(n-1,a,s);
        dp[n-1][s] = op;
        return op;
    }
}
int main(){
    int n;cin>>n;
    int a[n];
    memset(dp,-1,sizeof(dp));
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int s ;cin>>s;

    // if (subset_sum(n,a,s)) cout<<"YES";
    // else cout<<"NO";
    cout<<(subset_sum(n,a,s)?"YES":"NO");
    
    
    return 0;
}