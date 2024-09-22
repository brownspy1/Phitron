// Created by M.Mahadi on 2024-08-16 Time:22-23-05
#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> myList;
    while (true)
    {
        int value;
        cin >> value;
        if (value == -1)
            break;
        myList.push_back(value);
    }
    myList.sort();
    myList.unique();
    for (auto &&i : myList)
    {
        cout << i << " ";
    }

    return 0;
}