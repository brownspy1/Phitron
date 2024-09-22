#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a;
    int mn = 327670;
    int mx = -327680;
    for (size_t i = 0; i < 3; i++)
    {
        cin >> a;
        mn = min(mn, a);
        mx = max(mx, a);
    }
    cout << mn << " " << mx;
    return 0;
}