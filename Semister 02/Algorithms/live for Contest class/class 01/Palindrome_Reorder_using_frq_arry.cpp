// Created by @brownspy1 on 2024-10-14 Time:12-27-09
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    cin >> word;
    int n = word.size();
    int frq[26] = {0};
    for (int i : word)
    {
        frq[i - 'A']++;
    }

    int odd = 0;
    for (int i = 0; i < 26; i++)
        if (frq[i] % 2 != 0)
            odd++;

    string first, meddle, last;
    if (odd > 1)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    for (int i = 0; i < 26; i++)
    {
        if (frq[i] != 0)
        {
            if (frq[i] % 2 != 0)
            {
                for (int j = 0; j < frq[i]; j++)
                {
                    meddle.push_back(char(i + 'A'));
                }
            }
            else
            {
                for (int j = 0; j < frq[i] / 2; j++)
                {
                    first.push_back(char(i + 'A'));
                    last.push_back(char(i + 'A'));
                }
            }
        }
    }
    reverse(last.begin(), last.end());
    string ans = first + meddle + last;
    cout << ans;
    return 0;
}