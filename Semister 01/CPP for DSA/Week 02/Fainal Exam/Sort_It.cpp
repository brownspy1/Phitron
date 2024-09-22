// Created by M.Mahadi on 2024-06-28 03:24:09
#include <iostream>
#include <string>
using namespace std;

class student
{
public:
    string name;
    int cls;
    char season;
    int student_id;
    int math_mrk;
    int eng_mrk;
};
int main()
{
    int count;
    cin >> count;
    student list[count];
    for (int i = 0; i < count; i++)
    {
        cin >> list[i].name >> list[i].cls >> list[i].season >> list[i].student_id >> list[i].math_mrk >> list[i].eng_mrk;
    }

    for (int i = 0; i < count-1; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            int total_mark1 = list[i].eng_mrk + list[i].math_mrk;
            int total_mark2 = list[j].eng_mrk + list[j].math_mrk;
            if (total_mark1 < total_mark2)
            {
                swap(list[i], list[j]);
            }
            if (total_mark1 == total_mark2)
            {
                if (list[i].student_id > list[j].student_id)
                {
                    swap(list[i], list[j]);
                }
            }
        }
    }

    for (int i = 0; i < count; i++)
    {
        cout << list[i].name << " " << list[i].cls << " " << list[i].season << " " << list[i].student_id << " " << list[i].math_mrk << " " << list[i].eng_mrk << endl;
    }

    return 0;
}