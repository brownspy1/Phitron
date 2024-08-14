// Created by M.Mahadi on 2024-08-14 Time:18-51-22
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int high = *max_element(array, array + n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == high)
        {
            count++;
        }
    }
    cout << count;

    return 0;
}