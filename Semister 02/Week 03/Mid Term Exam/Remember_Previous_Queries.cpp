// Created by M.Mahadi on 2024-08-17 Time:01-42-38
#include <iostream>
#include <list>
using namespace std;
void print(list<int> myList)
{
    cout << "L -> ";
    for (auto &&i : myList)
    {
        cout << i << " ";
    }
}
void reverse(list<int> myList)
{
    list<int> myList2;
    myList2 = myList;
    myList2.reverse();
    cout << "R -> ";
    for (auto &&i : myList2)
    {
        cout << i << " ";
    }
};
int main()
{
    list<int> myList;
    int n;
    cin >> n;
    while (n--)
    {
        int I, V;
        cin >> I >> V;
        if (I == 0)
        {
            myList.push_front(V);
            print(myList);
            cout << endl;
            reverse(myList);
            cout << endl;
        }
        else if (I == 1)
        {
            myList.push_back(V);
            print(myList);
            cout << endl;
            reverse(myList);
            cout << endl;
        }
        else if (I == 2)
        {
            if (V >= 0 && V < myList.size())
            {
                myList.erase(next(myList.begin(), V));
                print(myList);
                cout << endl;
                reverse(myList);
                cout << endl;
            }
            else
            {
                print(myList);
                cout << endl;
                reverse(myList);
                cout << endl;
            }
        }
    }

    return 0;
}