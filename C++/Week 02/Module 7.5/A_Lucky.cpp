// Created by M.Mahadi on 2024-06-15 02:50:21
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string number;
        cin >> number;
        int one = (number[0] - '0') + (number[1] - '0') + (number[2] - '0');
        int two = (number[3] - '0') + (number[4] - '0') + (number[5] - '0');
        if (one == two)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}