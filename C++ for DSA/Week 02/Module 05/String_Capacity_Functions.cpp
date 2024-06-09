// Created by M.Mahadi on 2024-06-06 19:39:12
#include <iostream>
using namespace std;
int main()
{
    string n = "mahadi";
    cout << n.size() << endl;
    n.resize(10, 'M');
    cout << n << endl;
    n.clear();
    cout << n.size() << endl;
    cout << n.max_size() << endl;
    cout << n.capacity() << endl;
    if (n.empty() == true)
        cout << "empty";
    else
        cout << "not empty";

    return 0;
}