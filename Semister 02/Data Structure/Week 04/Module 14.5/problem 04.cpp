// Created by M.Mahadi on 2024-08-20 Time:19-51-37
#include <iostream>
#include <queue>
#include <stack>
using namespace std;
int main()
{
    queue<int> myQueue;
    queue<int> myQueue2;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        myQueue.push(x);
    }
    stack<int> myStack;
    while (!myQueue.empty())
    {
        int v = myQueue.front();
        myStack.push(v);
        myQueue.pop();
    }
    while (!myStack.empty())
    {
        int v = myStack.top();
        myQueue2.push(v);
        myStack.pop();
    }
    while (!myQueue2.empty())
    {
        cout << myQueue2.front() << " ";
        myQueue2.pop();
    }

    return 0;
}