// Created by M.Mahadi on 2024-05-24 21:21:45
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int *get_array(int n)
{
    int *arry = new int[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arry[i];
    }
    return arry;
}
int main()
{
    int n;
    cin >> n;
    int *arry = get_array(n);
    for (int i = 0; i < n; i++)
    {
        cout << arry[i] << " ";
    }

    return 0;
}