// Created by M.Mahadi on 2024-09-08 Time:03-00-31
#include <bits/stdc++.h>
using namespace std;
#define __fast                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int main()
{
    __fast int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        map<string, int> user;
        string name;
        getline(cin, name);
        string word;
        string target;
        int count = 0;
        stringstream ss(name);
        while (ss >> word)
        {
            user[word]++;
            if (user[word] > count)
            {
                count = user[word];
                target = word;
            }
        }
        cout << target << " " << count << endl;
    }

    return 0;
}