// Created by M.Mahadi on 2024-09-04 Time:20-21-30
#include <bits/stdc++.h>
using namespace std;
void insert_heap(vector<int> &v, int x)
{
    v.push_back(x);
    int curent_idx = v.size() - 1;
    while (curent_idx != 0)
    {
        int parent_idx = (curent_idx - 1) / 2;
        if (v[parent_idx] < v[curent_idx])
        {
            swap(v[parent_idx], v[curent_idx]);
        }
        else
            break;
        curent_idx = parent_idx;
    }
}
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert_heap(v, x);
    }
    for (auto &&i : v)
    {
        cout << i << " ";
    }

    return 0;
}