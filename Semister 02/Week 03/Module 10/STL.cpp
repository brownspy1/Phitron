// Created by M.Mahadi on 2024-08-13 Time:14-25-31
#include <iostream>
#include <list>
using namespace std;
int main()
{
    // list<int> myList(10); // size with gavage value
    list<int> myList(10, 50); // size with  value

    // itaretor of this STL
    for (auto i = myList.begin(); i != myList.end(); i++)
    {
        cout << *i << endl;
    }

    // // range base loop
    // for (auto i : myList)
    // {
    //     cout << i << endl;
    // }

    return 0;
}