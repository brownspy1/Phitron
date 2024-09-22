// Created by M.Mahadi on 2024-08-23 Time:01-06-57
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        string myString;
        getline(cin, myString);

        stack<char> st;
        for (auto &&i : myString)
        {
            if (i == '0' && !st.empty() && st.top() == '1')
            {
                st.pop();
            }
            else if (i == '1' && !st.empty() && st.top() == '0')
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