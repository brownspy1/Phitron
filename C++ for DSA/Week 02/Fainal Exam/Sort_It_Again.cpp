// Created by M.Mahadi on 2024-06-28 04:22:55
#include <iostream>
#include <utility>
using namespace std;
class student
{
public:
    string name;
    int cls;
    char section;
    int student_id;
    int math_marks;
    int eng_marks;
};
int main()
{
    int count;
    cin >> count;
    student list[count];
    for (int i = 0; i < count; i++)
    {
        cin >> list[i].name >> 
        list[i].cls >> list[i].section >> 
        list[i].student_id >> 
        list[i].math_marks >> 
        list[i].eng_marks;
    }
    for (int i = 0; i < count-1; i++)
    {
        for (int j = i+1; j < count; j++)
        {
            if (list[i].eng_marks<list[j].eng_marks)
            {
                swap(list[i],list[j]);
            }
            if (list[i].eng_marks==list[j].eng_marks)
            {
                if (list[i].math_marks<list[j].math_marks)
                {
                    swap(list[i],list[j]);
                }
                
            }
            if (list[i].eng_marks<list[j].eng_marks)
            {
                if (list[i].student_id<list[j].student_id)
                {
                    swap(list[i].student_id,list[j].student_id);
                }
                
            }
            
            
            
        }
        
    }
    


    for (int i = 0; i < count; i++)
    {
        cout << list[i].name << " " << 
        list[i].cls << " " << 
        list[i].section << " " << 
        list[i].student_id << " " << 
        list[i].math_marks << " " << 
        list[i].eng_marks << endl;
    }
    return 0;
}