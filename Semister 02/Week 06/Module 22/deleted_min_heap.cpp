// Created by M.Mahadi on 2024-09-05 Time:00-08-01
#include <bits/stdc++.h>
using namespace std;
void input(vector<int> &v, int x)
{
    v.push_back(x);
    int curent_idx = v.size() - 1;
    while (curent_idx != 0)
    {
        int parent_idx = (curent_idx - 1) / 2;
        if (v[parent_idx] > v[curent_idx])
        {
            swap(v[parent_idx], v[curent_idx]);
        }
        else
            break;
        curent_idx = parent_idx;
    }
}
void deleted(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();
    int curent_idx = 0;
    while (true)
    {
        int left = (curent_idx * 2) + 1;
        int right = (curent_idx * 2) + 2;
        int valid = v.size() - 1;
        if (left <= valid && right <= valid)
        {
            if (v[left] <= v[right] && v[curent_idx] > v[left])
            {
                swap(v[curent_idx], v[left]);
                curent_idx = left;
            }
            else if (v[right] <= v[left] && v[curent_idx] > v[right])
            {
                swap(v[curent_idx], v[right]);
                curent_idx = right;
            }
            else
                break;
        }
        else if (left <= valid)
        {
            if (v[left] < v[curent_idx])
            {
                swap(v[left], v[curent_idx]);
                curent_idx = left;
            }
            else
                break;
        }
        else if (right <= valid)
        {
            if (v[right] < v[curent_idx])
            {
                swap(v[right], v[curent_idx]);
                curent_idx = right;
            }
            else
                break;
        }
        else
        {
            break;
        }
    }
}
void print(vector<int> v)
{
    for (auto &&i : v)
    {
        cout << i << " ";
    }
    cout << endl;
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
        input(v, x);
    }
    while (n--)
    {
        print(v);
        deleted(v);
    }

    return 0;
}