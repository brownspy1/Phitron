// Created by M.Mahadi on 2024-08-13 Time:22-28-57
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    sort(array, array + size);
    int value;
    cin >> value;
    int L = 0, R = size - 1;
    bool flag = false;
    while (L <= R)
    {
        int mid = (L + R) / 2;
        if (array[mid] == value)
        {
            flag = true;
            break;
        }
        if (array[mid] < value)
            L = mid + 1;
        else
            R = mid - 1;
    }
    if (flag)
        cout << "Found";
    else
        cout << "Not Found";
    return 0;
}
