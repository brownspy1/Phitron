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
};
bool validation(student a, student b)
{
    if (a.roll <= b.roll)
    {
        swap(a.roll, b.roll);
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
        cin >> list[i].roll;
    }

    sort(list, list + n, validation);
    for (int i = 0; i < n; i++)
    {
        cout << list[i].name << " " << list[i].roll << endl;
    }

    return 0;
}