// Created by M.Mahadi on 2024-08-22 Time:19-52-27
#include <iostream>
#include <list>
using namespace std;
class Stack
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
        myList.pop_back();
    }
    int top() {}
    bool empty() {}
    int size() {}
};
class Queue
{
private:
    list<int> myList;
    int cnt = 0;

public:
    void push() {}
    void pop() {}
    int top() {}
    bool empty() {}
    int size() {}
};
int main()
{

    return 0;
}