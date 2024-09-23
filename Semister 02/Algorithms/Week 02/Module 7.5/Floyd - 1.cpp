// Created by M.Mahadi on 2024-09-22 Time:16-31-24
// https://basecamp.eolymp.com/en/problems/974
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int floyd[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> floyd[i][j];
        }
    }



    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (floyd[i][k] + floyd[k][j] < floyd[i][j])
                {
                    floyd[i][j] = floyd[i][k] + floyd[k][j];
                }
            }
        }
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << floyd[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}