// Created by M.Mahadi on 2024-06-13 19:24:32
#include <iostream>
using namespace std;
int main()
{
    string n;
    cin >> n;
    int ar[26] = {0};
    for (char c : n)
    {
        ar[c - 'a']++;
    }
    for (char i = 'a'; i <= 'z'; i++)
    {
        for (int x = 0; x < ar[i - 'a']; x++)
        {
            cout << i;
        }
    }

    return 0;
}