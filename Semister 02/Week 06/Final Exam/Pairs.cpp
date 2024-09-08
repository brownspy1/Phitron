// Created by M.Mahadi on 2024-09-08 Time:01-51-42
#include <bits/stdc++.h>
using namespace std;
#define __fast                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
class cmp
{
public:
    bool operator()(pair<string, int> &a, pair<string, int> &b)
    {

        if (a.first == b.first)
        {
            return a.second < b.second;
        }
        else
            return a.first > b.first;
    }
};
int main()
{
    __fast int n;
    cin >> n;
    priority_queue<pair<string, int>, vector<pair<string, int>>, cmp> user;
    while (n--)
    {
        string name;
        cin >> name;
        int roll;
        cin >> roll;
        user.push({name, roll});
    }
    while (!user.empty())
    {
        cout << user.top().first << " " << user.top().second << endl;
        user.pop();
    }

    return 0;
}