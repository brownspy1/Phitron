// Created by M.Mahadi on 2024-06-27 23:18:23
#include <iostream>
using namespace std;
class student {
    public:
    string name;
    int cls;
    char season;
    int student_id;
};
int main(){
    int n;
    cin>>n;
    student list[n];
    for (int i = 0; i < n; i++)
    {
        cin>>list[i].name>>list[i].cls>>list[i].season>>list[i].student_id;
    }
    
    for (int i = 0; i < n/2; i++)
    {
        swap(list[i].season,list[n-i-1].season);
    }
    


    for (int i = 0; i < n; i++)
    {
        cout<<list[i].name<<" "<<list[i].cls<<" "<<list[i].season<<" "<<list[i].student_id<<endl;
    }
    
    return 0;
}