// Created by M.Mahadi on 2024-06-09 16:43:53
#include <iostream>
using namespace std;
int main()
{
    string n;
    cin >> n;
    // for (int i = 0; i < n.size(); i++)
    // {
    //     cout << n[i] << endl;
    // }
    for (char X : n)
    {
        cout << X << endl;
    }
    return 0;
}