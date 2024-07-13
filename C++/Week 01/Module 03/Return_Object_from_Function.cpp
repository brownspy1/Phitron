// Created by M.Mahadi on 2024-05-25 11:25:33
#include <iostream>
#include <iomanip>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double cgpa;
    Student(int roll, int cls, double cgpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->cgpa = cgpa;
    }
};
Student fun()
{
    Student Mahadi(743678, 12, 4.00);
    return Mahadi;
}
int main()
{
    Student usar = fun();
    cout << usar.roll << endl
         << usar.cls << endl
         << fixed << setprecision(2) << usar.cgpa;

    return 0;
}