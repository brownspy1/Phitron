// Created by M.Mahadi on 2024-08-23 Time:01-06-57
#include <iostream>
#include <string>
#include <stack>
using namespace std;
bool valid(string myst)
{
}
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        cin.ignore();
        string myString;
        getline(cin, myString);
        if (valid(myString))
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