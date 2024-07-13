// Created by M.Mahadi on 2024-05-25 14:18:55
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int arry[N + 1];
    int d[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arry[i];
        d[i] = arry[i];
    }
    sort(arry, arry + N);
    sort(d, d + N, greater<int>());

    for (int i = 0; i < N; i++)
    {
        cout << arry[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < N; i++)
    {
        cout << d[i] << " ";
    }
    return 0;
}