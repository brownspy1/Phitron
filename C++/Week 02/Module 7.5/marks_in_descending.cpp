// Created by M.Mahadi on 2024-06-26 11:25:17
#include <iostream>
#include <utility>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int Marks;
};
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].Marks;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (a[i].Marks < a[j].Marks)
            {
                swap(a[i], a[j]);
            }

            if (a[i].Marks == a[j].Marks)
            {
                if (a[i].roll > a[j].roll)
                {
                    swap(a[i], a[j]);
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].Marks << endl;
    }

    return 0;
}