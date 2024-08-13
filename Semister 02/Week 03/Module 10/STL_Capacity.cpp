// Created by M.Mahadi on 2024-08-13 Time:15-10-33
#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> v = {10, 20, 30, 40, 50};
    v.resize(7, 500);
    v.resize(2);
    v.clear();
    if (v.empty())
    {
        cout << "This is Empty" << endl;
    }

    cout << v.size() << endl;
    for (auto &&i : v)
    {
        cout << i << endl;
    }

    return 0;
}