// Created by @brownspy1 on 2024-10-15 Time:22-30-49
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }
    int tr;
    cin >> tr;
    int R = n - 1;
    int L = 0;
    int x = -1;
    while (L <= R) {
        int Mid = (L + R) / 2;
        if (a[Mid].first == tr) {
            x = a[Mid].second;
            break;
        }
        if (tr < a[Mid].first) {
            L = Mid + 1;
        }
        if (a[Mid].first < tr) {
            R = Mid - 1;
        }
    }
    cout << x;
    return 0;
}
