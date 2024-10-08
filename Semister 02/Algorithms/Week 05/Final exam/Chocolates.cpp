// Created by @brownspy1 on 2024-10-08 Time:11:45:45
#include <bits/stdc++.h>
using namespace std;

#define pub(X) push_back(X)
#define pob pop_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define yes cout << "YES\n"
#define no cout << "NO\n"

const int MOD = 1e9+7;
const int INF = INT_MAX;
const int NINF = INT_MIN;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve();

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t; 
    while (t--) {
        solve();
    }
    return 0;
}

int dp[1005][1005];

bool subSetSum(int n, int a[], int w){
    if (n == 0) return w == 0;
    if (dp[n][w] != -1) return dp[n][w];
    if (a[n-1] <= w)
    {
        dp[n][w] = subSetSum(n-1,a,w-a[n-1]) || subSetSum(n-1,a,w);
        return dp[n][w];
    }else
    {
        dp[n][w] = subSetSum(n-1,a,w);
        return dp[n][w];
    }
    
    
}
void solve() {
    int n;cin>>n;
    int a[n];int sum=0;
    for (int i = 0; i <n; i++)  
    {
        cin>>a[i];
        sum+=a[i];
    }

    if (sum%2 == 1){ no; return;}
    int target = sum/2;
    memset(dp,-1,sizeof(dp));
    if(subSetSum(n,a,target)){
        yes;
    }else
    {
        no;
    }
    
       
    
    
}
