#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    switch (x % 2)
    {
    case 0:
        cout << "Even";
        break;
    default:
        cout << "Odd";
    }
    return 0;
}