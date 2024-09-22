#include <iostream>
using namespace std;
int main()
{
    // string::iterator it;
    string n;
    cin >> n;
    cout << *n.begin() << endl;
    cout << *n.end() << endl;
    for (auto it = n.begin(); it < n.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}