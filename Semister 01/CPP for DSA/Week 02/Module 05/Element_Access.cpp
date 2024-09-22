// Created by M.Mahadi on 2024-06-08 15:43:26
#include <iostream>
using namespace std;
int main()
{
    string n;
    cin >> n;
    cout << n[0] << endl
         << n.at(0) << endl
         << n.front() << endl
         << n[n.size() - 1] << endl
         << n.back() << endl;
    return 0;
}