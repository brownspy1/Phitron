// Created by @brownspy1 on 2024-10-16 Time:21:56:12
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
    ll n;cin>>n;
    vector<ll> myVector(n-2);
    ll sum = 0;
    for (ll i = 0; i <n-2; i++)
    {
        cin>>myVector[i];
        sum+=myVector[i];
    }
    ll old_sum ;
    cin>>old_sum;
    ll ans = (old_sum-sum)+1;
    cout<<ans<<endl;
}
