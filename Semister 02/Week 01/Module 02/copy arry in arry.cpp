// Created by M.Mahadi on 2024-07-06 14:24:35
#include <iostream>
#include <vector>
using namespace std;
int main(){
    // vector <int> v;
    // vector <int> v(10);
    // vector <int> v(10,20);
    int ar[10] = {100,200,300,400,500,600,700,800,900,1000};
    vector <int> v(ar,ar+10);
    for (int i = 0; i < 10; i++)
    {
        cout<<"index of ["<<i<<"] = "<<v[i]<<endl;
    }
    
    cout<<"size- "<<v.size()<<endl;
    return 0;
}