// Created by M.Mahadi on 2024-06-25 13:49:56
#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int count;
        char letter;
        cin >> count >> letter;
        for (int i = 0; i < count; i++)
        {
            cout << letter << " ";
        }
        cout << endl;
    }

    return 0;
}