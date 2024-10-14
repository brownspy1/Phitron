// Created by @brownspy1 on 2024-10-14 Time:13:14:36
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
    string s;
    cin >> s;
    map<char, int> mp;
    for (char i : s)
    {
        mp[i]++;
    }
    int n = s.size();
    int oddCnt = 0;
    for (auto [x, y] : mp)
    {
        if (y % 2 != 0)
            oddCnt++;
    }
    if (oddCnt > 1)
    {
        cout<<"NO SOLUTION"<<endl;
        return;
    }
    
    string first,mid,last;
    for (auto [x, y] : mp)
    {
        if (y % 2 != 0)
        {
            for (int i = 0; i < y; i++)
            {
                mid.push_back(x);
            }
            
        }
        else
        {
            for (int i = 0; i < y/2; i++)
            {
                first.push_back(x);
                last.push_back(x);
            }
        }
    }
    reverse(all(last));
    string ans = first+mid+last;
    cout<<ans<<endl;
}
