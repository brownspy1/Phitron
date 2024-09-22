// Created by M.Mahadi on 2024-08-22 Time:19-52-27
#include <iostream>
#include <list>
using namespace std;
class Stack
{
private:
    list<int> List;

public:
    void push(int v)
    {
        List.push_back(v);
    }
    void pop()
    {
        if (List.empty())
            return;

        List.pop_back();
    }
    int top()
    {
        if (List.empty())
            return -1;
        return List.back();
    }
    bool empty()
    {
        return List.empty();
    }
    int size()
    {
        return List.size();
    }
};
class Queue
{
private:
    list<int> myList;
    int cnt = 0;

public:
    void push(int v)
    {
        myList.push_back(v);
    }
    void pop()
    {
        if (myList.empty())
            return;

        myList.pop_front();
    }
    int front()
    {
        if (myList.empty())
            return -1;
        return myList.front();
    }
    bool empty()
    {
        return myList.empty();
    }
    int size()
    {
        return myList.size();
    }
};
int main()
{
    Stack s;
    Queue q;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    bool flag = true;
    if (n != m)
        flag = false;

    while (!s.empty())
    {
        if (s.top() != q.front())
        {
            flag = false;
        }
        s.pop();
        q.pop();
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