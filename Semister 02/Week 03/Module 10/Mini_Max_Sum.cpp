// Created by M.Mahadi on 2024-08-14 Time:18-38-02
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long int array[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> array[i];
    }
    long long int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += array[i];
    }

    long long int min = sum - *max_element(array, array + 5);
    long long int max = sum - *min_element(array, array + 5);

    cout << min << " " << max;

    return 0;
}