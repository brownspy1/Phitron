// Created by M.Mahadi on 2024-05-25 13:55:27
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char c;
    bool result=false;
    cin >> a >> c >> b;
    if (c == '<')
    {
        result = a < b;
    }
    else if (c == '>')
    {
        result = a > b;
    }
    else if (c == '=')
    {
        result = a == b;
    }
    else
    {
        result = false;
    }
 
    if (result)
    {
        cout << "Right" << endl;
    }
    else
    {
        cout << "Wrong" << endl;
    }
 
    return 0;
}
