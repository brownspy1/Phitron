// Created by M.Mahadi on 2024-08-18 Time:18-37-38
#include <iostream>
#include <list>
using namespace std;
class myStack
{
private:
    list<int> myList;

public:
    void push(int val)
    {
        myList.push_back(val);
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
        if (myList.size() == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myStack stack;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        stack.push(x);
    }

    while (!stack.empty())
    {
        cout << stack.top() << endl;
        stack.pop();
    }

    return 0;
}