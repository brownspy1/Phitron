#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    int n;
    cin >> n;
    vector<int> ar(n);
    
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }

  
    sort(ar.rbegin(), ar.rend());

 
    ll ans = 0;
    ll prev = INT_MAX;  

    for (int i = 0; i < n; i++) {
       
        if (ar[i] >= prev) {
            ar[i] = max(0, prev - 1); 
        }
        ans += ar[i]; 
        prev = ar[i]; 
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}