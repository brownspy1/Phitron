// Created by @brownspy1 on 2024-10-15 Time:21:54:23
#include <bits/stdc++.h>
using namespace std;

int maxBalls(vector<int>& balls) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    sort(balls.rbegin(), balls.rend());
    set<int> used;
    int totalBalls = 0;

    for (int count : balls) {
        while (count > 0 && used.find(count) != used.end()) {
            count--;
        }
        if (count > 0) {
            used.insert(count);
            totalBalls += count;
        }
    }

    return totalBalls;
}

int main() {
    int n;
    cin >> n;
    vector<int> balls(n);

    for (int i = 0; i < n; i++) {
        cin >> balls[i];
    }

    cout << maxBalls(balls) << endl;

    return 0;
}