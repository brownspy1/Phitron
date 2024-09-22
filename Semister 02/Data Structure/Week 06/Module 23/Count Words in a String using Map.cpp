// Created by M.Mahadi on 2024-09-07 Time:11-47-05
#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> count;
    string sentence;
    getline(cin, sentence);
    string word;
    stringstream ss(sentence);
    while (ss >> word)
    {
        count[word]++;
    }
    for (auto &&i : count)
    {
        cout << i.first << " : " << i.second << endl;
    }

    return 0;
}