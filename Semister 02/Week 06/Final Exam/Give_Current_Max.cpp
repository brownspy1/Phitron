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
        if (a.marks == b.marks)
        {
            return a.roll > b.roll;
        }
        return a.marks < b.marks;
    }
};
int main()
{
    __fast;
    priority_queue<student, vector<student>, cmp_max> user;
    int n;
    cin >> n;
    while (n--)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        student data(name, roll, marks);
        user.push(data);
    }
    int x;
    cin >> x;
    while (x--)
    {
        int c;
        cin >> c;
        if (c == 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            student data(name, roll, marks);
            user.push(data);
            cout << user.top().name << " " << user.top().roll << " " << user.top().marks << endl;
        }
        else if (c == 1)
        {
            if (!user.empty())
            {
                cout << user.top().name << " " << user.top().roll << " " << user.top().marks << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (c == 2)
        {
            if (!user.empty())
            {
                user.pop();
                if (!user.empty())
                {
                    cout << user.top().name << " " << user.top().roll << " " << user.top().marks << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}