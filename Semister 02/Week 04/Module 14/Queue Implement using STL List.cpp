// Created by M.Mahadi on 2024-08-19 Time:18-44-57
#include <iostream>
#include <list>
using namespace std;

class myQueue
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
        myList.pop_front();
    }
    int front()
    {
        return myList.front();
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
    myQueue q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}