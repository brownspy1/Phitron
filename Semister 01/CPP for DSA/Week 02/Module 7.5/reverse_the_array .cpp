// Created by M.Mahadi on 2024-06-26 22:02:24
#include <iostream>
#include <utility>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int Marks;
};
int main()
{
    int n;
    cin >> n;
    Student ary[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ary[i].name >> ary[i].roll >> ary[i].Marks;
    }
    for (int i = 0; i < n/2; i++)
    {
       
            Student temp = ary[i];
            ary[i]=ary[n-i-1];
            ary[n-i-1]=temp;
            // swap(ary[i],ary[j]);

        
        
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << ary[i].name << " " << ary[i].roll <<" "<< ary[i].Marks<<endl;
    }

    return 0;
}
