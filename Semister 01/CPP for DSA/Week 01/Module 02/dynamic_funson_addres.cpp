#include <bits/stdc++.h>
using namespace std;
int *mamory()
{
    int *a = new int;
    cout << "from fun:" << a << endl;
    *a = 82;
    return a;
}
int main()
{
    int *a = mamory();
    cout << "From main:" << *a;
    return 0;
}