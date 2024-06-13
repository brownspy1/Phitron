// Created by M.Mahadi on 2024-06-13 13:51:11
#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
    string name;
    int age;
    float hight;
};
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].age >> a[i].hight;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].age << " " << a[i].hight << endl;
    }

    return 0;
}