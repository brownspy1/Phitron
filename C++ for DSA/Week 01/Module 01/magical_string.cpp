#include <iostream>
#include <string>

using namespace std;
int main()
{
    // char arry[100];  // with out space
    // cin >> arry;
    // cout << arry;

    // with space
    int n;
    cin >> n;
    char arry[n + 1];
    getchar();
    cin.getline(arry, n);
    cout << arry;
    return 0;
}