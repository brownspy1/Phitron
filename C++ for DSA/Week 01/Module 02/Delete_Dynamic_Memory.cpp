// Created by M.Mahadi on 2024-05-24 18:37:53
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int *arry = new int[3];
    int *list = new int[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arry[i];
        list[i] = arry[i];
    }
    delete[] arry;
    arry = new int[5];
    for (int i = 0; i < 3; i++)
    {
        arry[i] = list[i];
    }
    delete[] list;
    for (int i = 3; i < 5; i++)
    {
        cin >> arry[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arry[i] << endl;
    }

    return 0;
}