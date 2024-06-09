// Created by M.Mahadi on 2024-06-09 16:50:11
#include <iostream>
#include <sstream>
using namespace std;
void print(stringstream &xx)
{
    string word;
    if (xx >> word)
    {
        print(xx);
        cout << word << endl;
    }
}
int main()
{
    string n;
    getline(cin, n);
    stringstream ss(n);
    print(ss);
    // string word;
    // while (ss >> word)
    // {
    //     cout << word << endl;
    // }

    return 0;
}