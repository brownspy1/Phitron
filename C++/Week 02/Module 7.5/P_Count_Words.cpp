// Created by M.Mahadi on 2024-06-14 23:27:58
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
    string n;
    getline(cin, n);
    int count = 0;
    bool insid_word = false;
    for (char c : n)
    {
        if (isalpha(c))
        {
            if (insid_word == false)
            {
                count++;
            }
            insid_word = true;
        }
        else
        {
            insid_word = false;
        }
    }
    printf("%d", count);
    return 0;
}