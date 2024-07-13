// Created by M.Mahadi on 2024-05-24 21:26:28
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *A = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int M;
    cin >> M;
    int *B = new int[M];
    for (int i = 0; i < n; i++)
    {
        B[i] = A[i];
    }
    delete[] A;
    for (int i = n; i < M; i++)
    {
        cin >> B[i];
    }

    for (int i = 0; i < M; i++)
    {
        cout << B[i] << " ";
    }

    return 0;
}