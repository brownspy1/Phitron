// Created by M.Mahadi on 2024-05-25 10:36:37
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {

        this->roll = roll;
        (*this).cls = cls;
        this->gpa = gpa;
    }
};
int main()
{
    Student mahadi(743678, 12, 5.0);
    cout << mahadi.roll << endl
         << mahadi.cls << endl
         << mahadi.gpa;
    return 0;
}