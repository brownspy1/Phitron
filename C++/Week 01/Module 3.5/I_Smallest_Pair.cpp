// Created by M.Mahadi on 2024-05-25 18:01:54
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int A;
        cin >> A;
        int arry[A];
        for (int B = 0; B < A; B++)
        {
            cin >> arry[B];
        }
        int mn = INT_MAX;
        for (int x = 0; x < A - 1; x++)
        {
            for (int j = x + 1; j < A; j++)
            {
                int value = arry[x] + arry[j] + j - x;
                mn = min(mn, value);
            }
        }
        cout << mn << endl;
    }

    return 0;
}