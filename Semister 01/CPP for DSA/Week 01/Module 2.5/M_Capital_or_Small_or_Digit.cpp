// Created by M.Mahadi on 2024-05-24 19:42:14
#include <iostream>
using namespace std;
int main()
{
    char n;
    cin >> n;
    if (int(n) >= 48 && int(n) <= 57)
    {
        cout << "IS DIGIT";
    }
    else if (int(n) >= 97 && int(n) <= 122)
    {
        cout << "ALPHA" << endl
             << "IS SMALL";
    }
    else if (int(n) >= 65 && int(n) <= 90)
    {
        cout << "ALPHA" << endl
             << "IS CAPITAL";
    }

    return 0;
}