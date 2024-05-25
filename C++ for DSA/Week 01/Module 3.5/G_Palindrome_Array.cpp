// Created by M.Mahadi on 2024-05-25 17:14:00
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arry[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arry[i];
    }
    int flag = 1;
    int j = n - 1;
    for (int i = 0; j > i; i++, j--)
    {
        if (arry[i] != arry[j])
        {
            flag = 0;
        }
    }
    if (flag == 0)
    {
        cout << "NO";
    }
    else if (flag = 1)
    {
        cout << "YES";
    }

    return 0;
}