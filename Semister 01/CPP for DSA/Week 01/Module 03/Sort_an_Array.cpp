// Created by M.Mahadi on 2024-05-25 12:26:25
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arry[n];
    for (int i = 0; i < n; i++)
        cin >> arry[i];
    // sort(arry, arry + n);
    // sort(arry, arry + n, greater<int>());
    for (int i = 0; i < n; i++)
        cout << arry[i] << " ";

    return 0;
}