// Created by M.Mahadi on 2024-09-08 Time:10:34:09
#include <bits/stdc++.h>
using namespace std;
#define __fast                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
class student
{
public:
    string name;
    int roll;
    int marks;
    student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};
class cmp_max
{
public:
    bool operator()(student a, student b)
    {
    }
};
int main()
{
    __fast;
    priority_queue<student, vector<student>, cmp_max> user;

    return 0;
}