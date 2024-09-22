// Created by M.Mahadi on 2024-09-06 Time:18-23-17
#include <bits/stdc++.h>
using namespace std;
class user
{
public:
    string name;
    int roll;
    int marks;
    user(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};
class compare
{
public:
    bool operator()(user a, user b)
    {
        if (a.marks < b.marks)
        {
            return true;
        }
        else if (a.marks > b.marks)
        {
            return false;
        }
        else
        {
            return a.roll > b.roll ? true : false;
        }
    }
};
int main()
{
    priority_queue<user, vector<user>, compare> heap;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        user data(name, roll, marks);
        heap.push(data);
    }

    while (!heap.empty())
    {
        cout << heap.top().name << " " << heap.top().roll << " " << heap.top().marks << endl;
        heap.pop();
    }

    return 0;
}