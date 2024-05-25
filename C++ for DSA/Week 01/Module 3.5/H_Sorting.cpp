// Created by M.Mahadi on 2024-05-25 18:39:38
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arry[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arry[i];
    }
    sort(arry, arry + n);
    for (int i = 0; i < n; i++)
    {
        cout << arry[i] << " ";
    }

    return 0;
}