// https: // www.naukri.com/code360/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166
#include <bits/stdc++.h>
stack<int> pushAtBottom(stack<int> &St, int x)
{
    stack<int> s1;
    while (!St.empty())
    {

        s1.push(St.top());
        St.pop();
    }
    s1.push(x);
    while (!s1.empty())
    {

        St.push(s1.top());
        s1.pop();
    }
    return St;
}
