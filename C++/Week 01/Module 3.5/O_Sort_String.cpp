// Created by M.Mahadi on 2024-05-25 16:42:24
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string arry;
    cin >> arry;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arry[i] > arry[j])
            {
                int temp = arry[i];
                arry[i] = arry[j];
                arry[j] = temp;
            }
        }
    }
    cout << arry;

    return 0;
}