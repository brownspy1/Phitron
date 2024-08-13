// Created by M.Mahadi on 2024-08-13 Time:14-25-31
#include <iostream>
#include <list>
using namespace std;
int main()
{
    // list<int> myList(10); // size with gavage value
    int l[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    list<int> myList(10, 50);     // size with  value
    list<int> myList2(l, l + 10); // copy from int array of l

    // iterator of this STL
    // list<int>::iterator i; // aita old new aitar pori borta auto use kora
    // for (auto i = myList.begin(); i != myList.end(); i++)
    // {
    //     cout << *i << endl;
    // }

    // range base loop
    for (auto i : myList2)
    {
        cout << i << endl;
    }

    return 0;
}