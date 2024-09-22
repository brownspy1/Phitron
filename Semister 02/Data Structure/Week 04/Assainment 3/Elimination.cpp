// Created by M.Mahadi on 2024-08-23 Time:02-39-23
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
    int N;
    cin >> N;
    while (N--)
    {
        cin.ignore();
        string bit;
        cin >> bit;
        stack<char> st;
        for (auto &&i : bit)
        {
            if (i == '1' && !st.empty() && st.top() == '0')
            {
                st.pop();
            }
            else
            {
                st.push(i);
            }
        }
        if (st.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}