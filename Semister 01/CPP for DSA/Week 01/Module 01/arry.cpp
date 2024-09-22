#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arry[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arry[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arry[i] << endl;
    }

    return 0;
}