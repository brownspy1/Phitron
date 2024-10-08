// Created by @brownspy1 on 2024-10-08 Time:14:00:47
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
void debug();
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
    int n;cin>>n;
    vi a;
    vi b;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin>>m;
        a.push_back(m);
        b.push_back(m);
    }
    vi index;
    sort(all(b),greater<int>());
    int x = b[0],y=b[1];
    for (int i = 0; i < n; i++)
    {
        if(x == a[i]){
            index.push_back(i);
        }
        if (y == a[i])
        {
            index.push_back(i);
        }
        
    }
    sort(all(index));
    cout<<index[0]<<" "<<index[1]<<endl;
    
}
