// https://www.naukri.com/code360/problems/reverse-first-k-elements-of-queue_982771
#include <bits/stdc++.h>
queue<int> reverseElements(queue<int> q, int k)
{
    queue<int> q2;
    stack<int> Stack;
    while (k--)
    {
        Stack.push(q.front());
        q.pop();
    }
    while (Stack.size() != 0)
    {
        q2.push(Stack.top());
        Stack.pop();
    }
    while (q.size() != 0)
    {
        q2.push(q.front());
        q.pop();
    }

    return q2;
}
