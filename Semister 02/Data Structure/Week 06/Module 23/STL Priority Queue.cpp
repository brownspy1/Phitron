// Created by M.Mahadi on 2024-09-06 Time:14-15-00
#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> heap;
    while (true)
    {
        int command;
        cin >> command;
        if (command == 0)
        {
            int x;
            cin >> x;
            heap.push(x);
        }
        else if (command == 1)
        {
            if (!heap.empty())
            {
                heap.pop();
            }
            else
            {
                cout << "heap is empty" << endl;
            }
        }
        else if (command == 2)
        {
            if (!heap.empty())
            {
                cout << heap.top() << endl;
            }
            else
            {
                cout << "heap is empty" << endl;
            }
        }
        else
        {
            break;
        }
    }

    return 0;
}