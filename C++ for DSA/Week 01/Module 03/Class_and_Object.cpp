// Created by M.Mahadi on 2024-05-25 01:18:03
#include <iostream>
#include <string>
using namespace std;
class student
{
public:
    char name[100];
    int roll;
    char Season[6];
    char department[20];
    long long int registration;
};
int main()
{
    student cmt;
    cin.getline(cmt.name, 100);
    cin >> cmt.roll;
    getchar();
    cin.getline(cmt.Season, 6);
    cin.getline(cmt.department, 20);
    cin >> cmt.registration;

    cout << "Student info" << endl
         << "Name: " << cmt.name << endl
         << "Roll: " << cmt.roll << endl
         << "Season: " << cmt.Season << endl
         << "Department: " << cmt.department << endl
         << "Registration: " << cmt.registration;
    return 0;
}