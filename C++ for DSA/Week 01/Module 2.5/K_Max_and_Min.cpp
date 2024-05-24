#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int mn = 32767;
    int mx = -32768;
    int a;
    for (size_t i = 0; i < 3; i++)
    {
        cin >> a;
        mn = min(mn, a);
        mx = max(mx, a);
    }
    cout << mn << " " << mx;
    return 0;
}