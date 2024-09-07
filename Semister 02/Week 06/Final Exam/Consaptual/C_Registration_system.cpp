// Created by M.Mahadi on 2024-09-07 Time:21-46-48
#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> user;
    int n;
    cin >> n;
    while (n--)
    {
        string name;
        cin >> name;
        if (user[name] == 0)
        {
            cout << "OK" << endl;
        }
        else
        {
            cout << name << user[name] << endl;
        }
        user[name]++;
    }

    return 0;
}