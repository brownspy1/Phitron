// Created by M.Mahadi on 2024-06-14 18:49:14
#include <iostream>
#include <algorithm>
using namespace std;
class freq
{
public:
    char value;
    int count;
};
bool cmp(freq a, freq b)
{
    if (a.count == b.count)
    {
        return a.value < b.value;
    }
    else
    {
        return a.count > b.count;
    }
}
int main()
{
    string n;
    cin >> n;
    freq arry[26];
    for (int i = 0; i < 26; i++)
    {
        arry[i].value = i + 'a';
        arry[i].count = 0;
    }
    for (char s : n)
    {
        int a = int(s - 'a');
        arry[a].count++;
    }
    sort(arry, arry + 26, cmp);
    for (int i = 0; i < 26; i++)
    {
        if (arry[i].count != 0)
        {
            for (int x = 0; x < arry[i].count; x++)
            {
                cout << arry[i].value;
            }
        }
    }

    return 0;
}