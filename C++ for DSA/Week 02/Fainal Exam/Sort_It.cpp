// Created by M.Mahadi on 2024-06-28 03:24:09
#include <iostream>
#include <string>
using namespace std;

class student{
    public:
    string name;
    int cls;
    char season;
    int student_id;
    int math_mrk;
    int eng_mrk;
};
int main(){
    int count;
    cin>>count;
    student list[count];
    for (int i = 0; i < count; i++)
    {
        cin>>list[i].name>>list[i].cls>>list[i].season>>list[i].student_id>>list[i].math_mrk>>list[i].eng_mrk;
    }
    
    return 0;
}