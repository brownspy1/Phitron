// Created by M.Mahadi on 2024-05-24 15:39:14
#include <iostream>
using namespace std;
int *fun()
{
    int *arry = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cout << arry[i] << endl;
    }
    -arry[0] = 10;
    arry[1] = 20;
    arry[2] = 30;
    arry[3] = 40;
    arry[4] = 50;
    return arry;
}
int main()
{
    int *arry = fun();
    for (int i = 0; i < 5; i++)
    {
        cout << endl
             << &arry[i] << endl;
    }

    return 0;
}
