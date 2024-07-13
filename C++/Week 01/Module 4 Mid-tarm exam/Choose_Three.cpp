// Created by M.Mahadi on 2024-05-25 23:29:43
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t, m;
        cin >> t >> m;
        int arry[t];
        for (int x = 0; x < t; x++)
        {
            cin >> arry[x];
        }
        bool result = false;
        for (int a = 0; a < t; a++)
        {
            for (int b = a + 1; b < t; b++)
            {
                for (int c = b + 1; c < t; c++)
                {
                    if (arry[a] + arry[b] + arry[c] == m)
                    {
                        result = true;
                    }
                }
            }
        }
        if (result)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}