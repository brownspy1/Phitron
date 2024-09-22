// Created by M.Mahadi on 2024-05-25 14:31:12
#include <iostream>
#include <algorithm>
using namespace std;
int *sort_it(int N)
{
    int *arry = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arry[i];
    }
    sort(arry, arry + N, greater<int>());

    return arry;
}
int main()
{
    int N;
    cin >> N;
    int *arry = sort_it(N);
    for (int i = 0; i < N; i++)
    {
        cout << arry[i] << " ";
    }

    return 0;
}