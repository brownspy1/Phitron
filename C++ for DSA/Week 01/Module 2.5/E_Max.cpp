#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar;
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ar;
        mx = max(ar, mx);
    }
    cout << mx;
}