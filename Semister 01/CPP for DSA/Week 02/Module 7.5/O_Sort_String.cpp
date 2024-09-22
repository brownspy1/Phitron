// Created by M.Mahadi on 2024-06-15 01:53:37
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string text;
    cin >> text;
    int frequency[26] = {0};
    for (char c : text)
    {
        frequency[c - 'a']++;
    };
    // for (int i = 0; i < 26; i++)
    // {
    //     cout << char(i + 'A') << "=" << frequency[i] << endl;
    // }

    for (char i = 'a'; i <= 'z'; i++)
    {
        for (int x = 0; x < frequency[i - 'a']; x++)
        {
            cout << i;
        }
    }

    return 0;
}