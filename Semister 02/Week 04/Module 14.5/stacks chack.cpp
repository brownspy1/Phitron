// Created by M.Mahadi on 2024-08-19 Time:23-10-16
#include <iostream>
#include <list>
using namespace std;

class myStack
{
private:
    list<int> myList;

public:
    void push(int v)
    {
        myList.push_back(v);
    }
    void pop()
    {
        myList.pop_back();
    }
    int top()
    {
        return myList.back();
    }
    int size()
    {
        return myList.size();
    }
    bool empty()
    {
        return myList.empty();
    }
};
int main()
{
    myStack StackOne;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        StackOne.push(x);
    }

    myStack StackTwo;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        StackTwo.push(x);
    }

    bool flag = true;

    if (StackOne.size() != StackTwo.size())
    {
        flag = false;
    }
    for (int i = 0; i < n; i++)
    {
        if (StackOne.top() != StackTwo.top())
        {
            flag = false;
        }
        StackOne.pop();
        StackTwo.pop();
    }

    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}