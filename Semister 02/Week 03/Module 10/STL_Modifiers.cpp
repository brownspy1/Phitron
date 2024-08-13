// Created by M.Mahadi on 2024-08-13 Time:15-48-15
#include <iostream>
#include <list>
using namespace std;
int main()
{
    int ar[9] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    list<int> myList(ar, ar + 9);
    list<int> myList2;
    myList.push_front(100);
    myList.pop_front();
    myList.insert(next(myList.begin(), 2), 500);
    myList.insert(next(myList.begin(), 2), {1, 2, 3, 4, 5, 6});
    myList.insert(next(myList.begin(), 4), {500, 600, 700});
    myList.erase(next(myList.begin(), 2), myList.end()); // if i uzse end() delet all from my pointer
    // myList2.assign(myList.begin(), myList.end());
    // myList2.push_back(100);
    // myList2.push_back(110);
    // myList.pop_back();
    myList2 = myList;
    for (auto &&i : myList2)
    {
        cout << i << endl;
    }

    return 0;
}