// Created by @brownspy1 on 2024-10-16 Time:21:02:10
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


void solve() {
    int n,m;cin>>n>>m;
    string bit1;cin>>bit1;
    string bit2;cin>>bit2;

    int uniq = 0;
    for (int i = 0; i < n; i++)
    {
        if (bit1[i] != bit2[i])
        {
            uniq++;
        }
        
    }
    if (uniq > m)
    {
        no;
    }else
    {
        yes;
    }
    
    
    
}
