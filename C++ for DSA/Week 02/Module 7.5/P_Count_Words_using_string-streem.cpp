// Created by M.Mahadi on 2024-06-14 23:27:58
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sstream>
using namespace std;
int main()
{
    string n;
    getline(cin, n);
    stringstream ss(n);
    string word;
    int count = 0;
    while (ss >> word)
    {
        bool val = false;
        for (char c : word)
        {

            if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
            {
                val = true;
            }
        }
        if (val == true)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}