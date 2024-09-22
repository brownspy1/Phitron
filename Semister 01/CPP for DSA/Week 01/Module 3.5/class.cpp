// Created by M.Mahadi on 2024-05-25 18:59:28
#include <iostream>
#include <string.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    char section;
    int math_marks;
    int cls;
    Student(char name[], int roll, char section, int math_marks, int cls)
    {
        strcpy(this->name, name);
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};
int main()
{
    Student UseaR("Mahadi", 743678, 'A', 85, 12);
    Student UseaR2("Miraz", 743650, 'B', 79, 12);
    Student UseaR3("Munnah", 743679, 'C', 80, 12);

    int a = UseaR.math_marks;
    int b = UseaR2.math_marks;
    int c = UseaR3.math_marks;

    if (a > b && a > c)
    {
        cout << UseaR.name;
    }
    else if (b > a && b > c)
    {
        cout << UseaR2.name;
    }
    else if (c > a && c > b)
    {
        cout << UseaR3.name;
    }
    else
    {
        cout << UseaR.name << endl;
        cout << UseaR2.name << endl;
        cout << UseaR3.name << endl;
    }

    // cout << UseaR.name << endl
    //      << UseaR.roll << endl
    //      << UseaR.section << endl
    //      << UseaR.math_marks << endl
    //      << UseaR.cls;
    return 0;
}
