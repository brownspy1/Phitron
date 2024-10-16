// Created by @brownspy1 on 2024-10-16 Time:15:10:34
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

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    int ar[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        sum += ar[i];
    }

    bool dp[n + 1][(sum/2)+1];
    for (int i = 0; i <= n; i++)
    {
        dp[0][i] = false;
    }
    dp[0][0] = true;

    int k = n/2 ,s = sum/2;
    for (int i = 0; i < n; i++)
    {
        int coin = ar[i];
        for (int j = k; j > 0; j--)
        {
            /* code */
        }
        
    }
    
    
    
    vector<int> v;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            if (dp[i][j] != false)
            {
                v.push_back(j);
            }
        }
    }
    int min_v = INT_MAX;

    for (auto i : v)
    {
        int s1 = i;
        int s2 = sum - i;
        min_v = min(min_v, abs(s1 - s2));
    }
    cout << min_v << endl;
}
