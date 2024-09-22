// Created by M.Mahadi on 2024-07-06 14:42:49
#include <iostream>
#include <vector>
using namespace std;
int main(){
    //size()
    //push_back()
    //max_size()
    //capacity()
    //clear()
    //empty
    //resize()

    vector<int> v;
    cout<<v.max_size()<<endl;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    cout<<v.capacity()<<endl;
    v.clear();
    cout<<v.size()<<endl;
    cout<<v.empty()<<endl; // true 1 false 0
    v.resize(6);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    


    return 0;
}