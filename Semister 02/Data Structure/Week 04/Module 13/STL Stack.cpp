// Created by M.Mahadi on 2024-08-18 Time:20-18-34
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> myStack;
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
        cout << myStack.top() << endl;
        myStack.pop();
    }

    return 0;
}