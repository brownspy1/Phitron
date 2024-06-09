// Created by M.Mahadi on 2024-06-09 08:32:53
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string n;
    getline(cin, n);
    sort(n.begin(), n.end());
    cout << n << endl;
    return 0;
}