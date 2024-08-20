//*Created by M.Mahadi on 2024-08-20 Time:16-29-04
#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int main()
{
    stack<int> s;
    queue<int> q;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    bool flag = true;
    if (s.size() != q.size())
    {
        flag = false;
    }

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