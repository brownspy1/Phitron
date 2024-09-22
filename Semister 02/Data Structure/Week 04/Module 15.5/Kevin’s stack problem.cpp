// Created by M.Mahadi on 2024-08-22 Time:18-58-41
#include <bits/stdc++.h>
using namespace std;
string kevinStackProblem(string &s)
{
    stack<char> st;
    for (auto &&c : s)
    {
        st.push(c);
    }
    string mm;

    while (!st.empty())
    {
        mm += st.top();
        st.pop();
    }
    return mm;
}