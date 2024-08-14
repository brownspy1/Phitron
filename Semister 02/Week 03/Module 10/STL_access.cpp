// Created by M.Mahadi on 2024-08-13 Time:17-32-24
#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 30, 40, 50, 60};
    cout << myList.back() << endl;
    cout << myList.front() << endl;
    cout << *next(myList.begin(), 3) << endl;
    return 0;
}