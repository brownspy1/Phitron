// Created by @brownspy1 on 2024-10-07 Time:23:58:41
#include <bits/stdc++.h>
using namespace std;


#define yes cout << "YES\n"
#define no cout << "NO\n"

typedef long long ll;

void solve();

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t ;
    cin >> t; 
    while (t--) {
        solve();
    }
    return 0;
}
const int N = 1e5+5;
bool dp[N];
ll n;
bool Subset(ll t){
    dp[1] = true;
    for (int i = 1; i <= n; i++)
    {
        if (dp[i])
        {
            if (i+3 <= n) dp[i+3] = true;
            if (i*2 <= n) dp[i*2] = true;
        }
        
    }
    return dp[n];   
    
}
// bool Subset(ll t){
//     if (t == n) return true;
//     if (t > n || t>=N) return false;
//     if (dp[t] != -1) return dp[t];
//     return dp[t] = Subset(t+3) || Subset(t*2);
// }
void solve() {
    cin>>n;
    memset(dp,false,sizeof(dp));
    if (Subset(1))
    {
        yes;
    }
    else
    {
        no;
    }
    
    
    
}
