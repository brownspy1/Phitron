// Created by @brownspy1 on 2024-10-14 Time:15-04-40
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i;
    }
    cout << endl;
    for (int i = 2; i <= n; i++)
    {
        cout << i;
        if (i != n)
        {
            for (int i = 0; i < n - 2; i++)
            {
                cout << " ";
            }
        }

        if (i != n)
            cout << n << endl;

        if (i == n)
        {
            for (int j = 1; j < n; j++)
            {
                cout << n;
            }
        }
    }

    return 0;
}