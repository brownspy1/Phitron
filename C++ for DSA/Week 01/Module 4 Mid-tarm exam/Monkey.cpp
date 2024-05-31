// Created by M.Mahadi on 2024-05-25 23:10:12
#include <iostream>
#include <string.h>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    
    char arry[100005];
    while (cin.getline(arry, 100005))
    {

        int n = strlen(arry);
        sort(arry, arry + n);

        for (int i = 0; i < n; i++)
        {
            if (arry[i] != ' ')
            {
                cout << arry[i];
            }
        }
        cout << endl;
    }

    return 0;
}