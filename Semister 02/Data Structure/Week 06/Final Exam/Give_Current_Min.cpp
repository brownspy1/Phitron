// Created by M.Mahadi on 2024-09-08 Time:09:47:28
#include <bits/stdc++.h>

using namespace std;
#define __fast                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int main()
{
    __fast;
    priority_queue<int, vector<int>, greater<int>> num;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        num.push(x);
    }
    int comm;
    cin >> comm;
    while (comm--)
    {
        int cmd;
        cin >> cmd;
        if (cmd == 0)
        {
            int m;
            cin >> m;
            num.push(m);
            cout << num.top() << endl;
        }
        else if (cmd == 1)
        {
            if (!num.empty())
            {
                cout << num.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (cmd == 2)
        {
            if (!num.empty())
            {
                num.pop();
                if (!num.empty())
                {
                    cout << num.top() << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else
            cout << "Empty" << endl;
    }

    return 0;
}