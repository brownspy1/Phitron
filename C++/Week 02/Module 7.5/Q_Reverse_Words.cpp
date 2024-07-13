// Created by M.Mahadi on 2024-06-15 00:54:36
#include <iostream>
#include <sstream>
#include <algorithm>
#include <string.h>
using namespace std;
void swp(string &tx)
{
    int n = tx.length();
    for (int i = 0; i < n / 2; i++)
    {
        char temp = tx[i];
        tx[i] = tx[n - i - 1];
        tx[n - i - 1] = temp;
    }
}
int main()
{
    string text;
    getline(cin, text);
    stringstream ss(text);
    string word;
    bool first_word = true;
    while (ss >> word)
    {
        if (!first_word)
        {
            cout << " ";
        }
        swp(word);
        cout << word;
        first_word = false;
    }

    return 0;
}
