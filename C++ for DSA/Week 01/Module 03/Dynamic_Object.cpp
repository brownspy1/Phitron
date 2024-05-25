// Created by M.Mahadi on 2024-05-25 11:52:41
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
Student *fun()
{
    Student *mahadi = new Student(743678, 12, 4.00);

    return mahadi;
}
int main()
{
    Student *usaR = fun();
    cout << endl
         << usaR->roll << endl
         << usaR->cls << endl
         << fixed << setprecision(2) << usaR->cgpa << endl;
    delete usaR;
    cout << endl
         << usaR->roll << endl
         << usaR->cls << endl
         << fixed << setprecision(2) << usaR->cgpa;
    return 0;
}