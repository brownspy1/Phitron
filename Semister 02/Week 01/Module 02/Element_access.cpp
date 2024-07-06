// Created by M.Mahadi on 2024-07-07 00:34:28
#include <iostream>
#include <vector>
using namespace std;
int main(){
    //elimant acces
    vector <int> v ={10,20,30,40,50,5,6,0,8,0,3,9,0};
    // cout<<"Fast value "<<v[0]<<" "<<endl;
    // cout<<"Fast value "<<v.front()<<" "<<endl;
    // cout<<"last value "<<v[v.size()-1]<<" ";
    // cout<<"last value "<<v.back()<<" ";
    vector <int> :: iterator it;
    for (it =v.begin(); it < v.end(); it++)
    {
        cout<<*it<<" ";
    }
    
    return 0;
}