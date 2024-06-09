// Created by M.Mahadi on 2024-06-09 07:59:24
#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    string n;
    getline(cin, n);
    stringstream ss(n);
    // ss << n;
    string list;
    int b = 1;
    while (ss >> list || b == 26)
    {
        cout << list << "-" << b << endl;
        b++;
    }

    return 0;
}