// Created by @brownspy1 on 2024-10-16 Time:21:10:34
#include <bits/stdc++.h>
using namespace std;

#define pub(X) push_back(X)
#define pob pop_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define yes cout << "YES\n"
#define no cout << "NO\n"

const int MOD = 1e9 + 7;
const int INF = INT_MAX;
const int NINF = INT_MIN;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve();

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();

    return 0;
}

void solve()
{
    ll n;
    cin >> n;
    vector<int> A(n);
    
    ll total = 0; 

    for(ll i = 0; i < n; i++) {
        cin >> A[i];
        total += A[i];
    }
    
    ll left = 0; 
    for(ll i = 0; i < n; i++) {
        ll right = total - left - A[i];
        if(left == right) {
            cout << left+A[i] << " " << (i + 1) << endl;
            return ; 
        }
        left += A[i]; 
    }
    
    cout << "UNSTABLE" << endl; 
}
