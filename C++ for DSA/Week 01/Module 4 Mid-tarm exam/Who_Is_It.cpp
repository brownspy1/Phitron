// Created by M.Mahadi on 2024-05-25 22:35:02
#include <iostream>
#include <climits>
using namespace std;
class Student
{
public:
    int ID;
    string Name;
    char Season;
    int Marks;
};
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        Student UserR[3];
        int n = 3;
        while (n--)
        {
            cin >> UserR[n].ID >> UserR[n].Name >> UserR[n].Season >> UserR[n].Marks;
        }
        int mx_marks = INT_MIN, mx_index = INT_MIN;
        for (int i = 0; i < 3; i++)
        {
            if (UserR[i].Marks > mx_marks || (UserR[i].Marks == mx_marks || UserR[i].ID > UserR[mx_index].ID))
            {
                mx_marks = UserR[i].Marks;
                mx_index = i;
            }
        }
        cout << UserR[mx_index].ID << " " << UserR[mx_index].Name << " " << UserR[mx_index].Season << " " << UserR[mx_index].Marks << endl;
    }

    return 0;
}