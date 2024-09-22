// Created by M.Mahadi on 2024-05-24 11:11:50
#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int mx = max({a, b, c});
    int mn = min({a, b, c});
    // cout << "minimam value = " << mx << endl
    //      << "Maximam value = " << mn;
    swap(a, b);
    cout << "valu of a: " << a << endl
         << "value of b: " << b;

    return 0;
}