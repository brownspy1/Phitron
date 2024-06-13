// Created by M.Mahadi on 2024-06-13 14:54:31
#include <iostream>
#include <utility>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
void sorting_me(Student arry[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arry[i].marks < arry[j].marks)
            {
                swap(arry[i], arry[j]);
            }
            if (arry[i].marks == arry[j].marks)
            {
                if (arry[i].roll > arry[j].roll)
                {
                    swap(arry[i], arry[j]);
                }
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    Student arry[n];

    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, arry[i].name);
        cin >> arry[i].roll >> arry[i].marks;
    }
    sorting_me(arry, n);
    for (int i = 0; i < n; i++)
    {
        cout << arry[i].name << " " << arry[i].roll << " " << arry[i].marks << endl;
    }

    return 0;
}