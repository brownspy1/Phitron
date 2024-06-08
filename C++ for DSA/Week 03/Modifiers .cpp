// Created by M.Mahadi on 2024-06-08 16:16:33
#include <iostream>
using namespace std;
int main()
{
    string n = "HelloWorld";
    string a = "X";
    // n += a;
    // n += "F";
    cout << n.append("DD") << endl;
    n.pop_back();
    n.push_back('A');
    cout << n << endl;
    n = "Hay this is new assain string";
    n.erase(8, 3);
    n.replace(9, 0, "Mahadi ");
    cout << n << endl;
    n.assign("Mahadi");
    cout << n << endl;

    return 0;
}