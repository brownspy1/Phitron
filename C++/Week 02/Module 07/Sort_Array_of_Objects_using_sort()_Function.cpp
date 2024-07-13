// Created by M.Mahadi on 2024-06-13 18:35:08
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
class student
{
public:
    string name;
    int roll;
    int marks;
};
bool validation(student a, student b)
{
    if (a.marks == b.marks)
    {
        return a.roll < b.roll;
    }
    else if (a.marks < b.marks)
    {
        return true;
    }
}
int main()
{
    int n;
    cin >> n;
    student list[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, list[i].name);
        cin >> list[i].roll >> list[i].marks;
    }

    sort(list, list + n, validation);
    for (int i = 0; i < n; i++)
    {
        cout << list[i].name << " " << list[i].marks << " " << list[i].roll << endl;
    }

    return 0;
}