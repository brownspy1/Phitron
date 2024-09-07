// Created by M.Mahadi on 2024-09-07 Time:21-42-48
#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> ss;
    ss.insert(10);
    ss.insert(30);
    ss.insert(20);
    ss.insert(40);
    for (auto &&i : ss)
    {
        cout << i << endl;
    }

    return 0;
}