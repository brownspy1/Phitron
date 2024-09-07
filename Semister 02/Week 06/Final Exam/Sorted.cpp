// Created by M.Mahadi on 2024-09-08 Time:01:12:08
#include <bits/stdc++.h>
using namespace std;
#define __fast                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

class cotoTekeBoro
{
public:
    bool operator()(int a, int b)
    {
        return a > b ? true : false;
    }
};
int main()
{
    __fast

        int m;
    cin >> m;
    while (m--)
    {
        set<int> num;
        int n;
        cin >> n;
        while (n--)
        {
            int val;
            cin >> val;
            num.insert(val);
        }
        priority_queue<int, vector<int>, cotoTekeBoro> sorted;
        for (auto &&i : num)
        {
            sorted.push(i);
        }
        while (!sorted.empty())
        {
            cout << sorted.top() << " ";
            sorted.pop();
        }
        cout << endl;
    }

    return 0;
}