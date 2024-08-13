// Created by M.Mahadi on 2024-08-13 Time:16-58-09
#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> myList = {10, 10, 20, 20, 50, 20, 10, 60, 5, 3, 5, 2, 1, 3};
    // myList.remove(10);
    myList.sort();
    // myList.sort(greater<int>());
    myList.unique();
    myList.reverse();
    for (auto &&i : myList)
    {
        cout << i << endl;
    }

    return 0;
}