// Created by M.Mahadi on 2024-08-19 Time:20-55-56
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> myQ1;
    queue<int> myQ2;
    queue<int> mergedQueue;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        myQ1.push(x);
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        myQ2.push(x);
    }

    while (!myQ1.empty())
    {
        mergedQueue.push(myQ1.front());
        myQ1.pop();
    }
    while (!myQ2.empty())
    {
        mergedQueue.push(myQ2.front());
        myQ2.pop();
    }

    while (!mergedQueue.empty())
    {
        cout << mergedQueue.front() << " ";
        mergedQueue.pop();
    }

    return 0;
}