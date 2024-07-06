// Created by M.Mahadi on 2024-07-06 14:24:35
#include <iostream>
#include <vector>
using namespace std;
int main(){
    // vector <int> v;
    // vector <int> v(10);
    vector <int> v(10,20);
    for (int i = 0; i < 10; i++)
    {
        cout<<"index of ["<<i<<"] = "<<v[i]<<endl;
    }
    
    cout<<"size- "<<v.size()<<endl;
    return 0;
}