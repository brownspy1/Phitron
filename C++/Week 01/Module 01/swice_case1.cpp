#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    switch (x)
    {
    case 1:
        cout << "one";
        break;
    case 2:
        cout << "two";
        break;
    case 3:
        cout << "Three";
        break;
    case 4:
        cout << "four";
        break;
    default:
        cout << "your input is out of my database";
    }
}