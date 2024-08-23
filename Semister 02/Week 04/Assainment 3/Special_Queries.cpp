// Created by M.Mahadi on 2024-08-23 Time:01-34-41
#include <iostream>
#include <string>
#include <queue>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    queue<string> st;
    while (n--)
    {
        int command;
        cin >> command;
        if (command == 0)
        {
            string Name;
            cin >> Name;
            st.push(Name);
        }
        else if (command == 1)
        {
            if (!st.empty())
            {
                string user = st.front();
                st.pop();
                cout << user << endl;
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
        else
        {
            cout << "Invalid" << endl;
        }
    }

    return 0;
}