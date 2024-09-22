// Created by M.Mahadi on 2024-09-07 Time:22-54-07
#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> number;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        number.insert(x);
    }
    auto value = ++number.begin();
    if (value != number.end())
        cout << *value << endl;
    else
        cout << "NO" << endl;

    return 0;
}