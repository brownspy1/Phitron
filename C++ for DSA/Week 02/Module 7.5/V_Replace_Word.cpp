// Created by M.Mahadi on 2024-06-15 02:43:34
#include <iostream>
using namespace std;
int main()
{
    string text;
    cin >> text;
    while (text.find("EGYPT") != -1)
    {
        text.replace(text.find("EGYPT"), 5, " ");
    }
    cout << text;
    return 0;
}