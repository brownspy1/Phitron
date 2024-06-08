// Created by M.Mahadi on 2024-06-08 23:34:34
#include <iostream>
using namespace std;
int main()
{
    int x;
    string n;
    cin >> x;
    cin.ignore();
    // getchar();
    getline(cin, n);
    cout << x << endl
         << n << endl;
    return 0;
}