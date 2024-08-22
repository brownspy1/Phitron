// Created by M.Mahadi on 2024-08-22 Time:19-29-59
#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    stack<int> s;
    queue<int> q;
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

    while (n--)
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