// Created by M.Mahadi on 2024-05-25 16:31:13
#include <iostream>
using namespace std;
int main()
{
    int A, B;
    char C, D;
    int ANS;
    bool result = false;
    int re;
    cin >> A >> C >> B >> D >> ANS;
    if (C == '+')
    {
        result = A + B == ANS;
        re = A + B;
    }
    else if (C == '-')
    {
        result = A - B == ANS;
        re = A - B;
    }
    else if (C == '*')
    {
        result = A * B == ANS;
        re = A * B;
    }

    if (result)
    {
        cout << "Yes";
    }
    else
    {
        cout << re;
    }

    return 0;
}