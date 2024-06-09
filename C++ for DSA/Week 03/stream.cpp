// Created by M.Mahadi on 2024-06-08 23:54:34
#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    string n;
    getline(cin, n);
    stringstream ss(n);
    string w;
    while (ss >> w)
    {
        cout << w << endl;
    }

    return 0;
}
