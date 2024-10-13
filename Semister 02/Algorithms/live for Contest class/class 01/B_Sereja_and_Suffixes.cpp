// Created by @brownspy1 on 2024-10-13 Time:10-23-53
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> v(n+1);
    for (int i = 1; i <= n; i++)
    {
        
        cin >> v[i];
    }
    vector<int> cnt(n+1);
    set<int> st;
    for (int i = n; i >= 1; i--)
    {
        st.insert(v[i]);
        cnt[i]=st.size();
    }

    for (int i = 1; i <= m; i++)
    {
        int Q;
        cin >> Q;
        cout << cnt[Q] << endl;
    }

    return 0;
}