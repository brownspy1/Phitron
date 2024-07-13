// Created by M.Mahadi on 2024-06-13 14:09:54
#include <iostream>
#include <string>
#include <limits.h>
using namespace std;
class user
{
public:
    string name;
    int age;
    int math_marks;
    // user(string name, int age, int math_marks)
    // {
    //     this->name = name;
    //     this->age = age;
    //     this->math_marks = math_marks;
    // }
};
int main()
{
    int x;
    cin >> x;
    for (int m = 0; m < x; m++)
    {
        int n;
        cin >> n;
        user arry[n];
        for (int i = 0; i < n; i++)
        {
            cin.ignore();
            getline(cin, arry[i].name);
            cin >> arry[i].age >> arry[i].math_marks;
        }

        user nm;
        nm.math_marks = INT_MIN; // if you want max valu you use min and want min use max
        for (int i = 0; i < n; i++)
        {
            if (arry[i].math_marks > nm.math_marks)
            {
                nm = arry[i];
            }
        }

        cout << nm.name << endl;
    }

    return 0;
}