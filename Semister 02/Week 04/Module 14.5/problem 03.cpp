// Created by M.Mahadi on 2024-08-20 Time:19-06-28
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> myStack;
    stack<int> myStack2;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        myStack.push(x);
    }
    while (!myStack.empty())
    {
        int val = myStack.top();
        myStack2.push(val);
        myStack.pop();
    }
    while (!myStack2.empty())
    {
        cout << myStack2.top() << " ";
        myStack2.pop();
    }

    return 0;
}